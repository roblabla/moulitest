# Moulitest: C Test Framework

> Si vous cherchez les tests pour **libft/gnl/ft_ls/ft_printf**, c'est par ici: https://github.com/yyang42/moulitest_42projects
	
## Install

```shell
$ brew install https://raw.githubusercontent.com/yyang42/moulitest/fw/moulitest.rb
```

Ceci va installer le programme moulitest sur votre machine.

## Quick Start

**1) Creer un fichier moulitest.cfg (dans votre dossier de projet)**
```ini
[General]
sources: ft_strlen.c
headers:
```
**source**: vous pouvez utiliser des wildcards pour inclure des sources (e.g. srcs/*.c mais attention a ne pas inclure les .spec.c (voir plus bas)

**headers**: indiquez ici les dossiers contenant vos headers, e.g. /path/includes /libpath/includes

**2) Creer un fichier ft_strlen.spec.c**
```c
#include <moulitest.h>

size_t ft_strlen(char *s); // ou inclure le .h

void test_00(t_test *test)
{
	mt_assert(ft_strlen("coucou") == strlen("coucou"));
}

void	suite_ft_strlen(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test_00);
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
