# Install

```
$ brew install https://raw.githubusercontent.com/yyang42/moulitest/fw/moulitest.rb
```

Ceci va installer le programme moulitest sur votre machine.

# Quick Start

##creer un fichier moulitest.cfg (dans votre dossier de projet)
```
[General]
sources: ft_strlen.c	# les wildcards marchent e.g. srcs/*.c
headers: 				# peut être vide
```

##creer un fichier ft_strlen.spec.c
```
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

##creer votre fichier ft_strlen.c
```
/!\ vous croyez quand meme pas que je vais vous donner mon code /!\
```

##entrer la commande dans le dossier de votre projet
```
$ moulitest
```

##votre dossier doit ressembler à ca
```
dossier_project/
	- ft_strlen.c
	- ft_strlen.spec.c
	- moulitest.cfg
```