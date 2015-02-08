# Moulitest test framework

## Install

```shell
$ brew install https://raw.githubusercontent.com/yyang42/moulitest/fw/moulitest.rb
```

Ceci va installer le programme moulitest sur votre machine.

## Quick Start

**1) Creer un fichier moulitest.cfg (dans votre dossier de projet)**
```ini
[General]
sources: ft_strlen.c	# les wildcards marchent e.g. srcs/*.c
headers: 				# peut être vide
```

**2) Creer un fichier ft_strlen.spec.c**
```c
#include <moulitest.h>

size_t ft_strlen(char *s); // ou inclure le .h

void test_coucou(t_test *test)
{
	mt_assert(strcmp(coucou(), "coucou") == 0);
}

void	suite_coucou(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test_coucou);
}
```

**3) Creer votre fichier ft_strlen.c**
```
/!\ vous croyez quand meme pas que je vais vous donner mon code /!\
```

**4) Entrer la commande dans le dossier de votre projet**

```shell
$ moulitest
```

**Votre dossier doit ressembler à ça**
```
dossier_project/
	- ft_strlen.c
	- ft_strlen.spec.c
	- moulitest.cfg
```
