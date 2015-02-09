# Moulitest: C Test Framework

> Si vous cherchez les tests pour **libft/gnl/ft_ls/ft_printf**, c'est par ici: https://github.com/yyang42/moulitest_42projects
	
## Install

```shell
$ brew install https://raw.githubusercontent.com/yyang42/moulitest/fw/moulitest.rb
```

- Ceci va installer le programme moulitest sur votre machine.
- Ignorez ce message: "Warning: Cannot verify integrity ..."
- Si besoin, utilisez ```brew reinstall``` pour ... reinstaller


## Quick Start

**1) Créez un fichier moulitest.cfg (dans votre dossier de projet)**
```ini
[General]
sources: ft_strlen.c
headers:
```

- **sources**: vous pouvez utiliser des wildcards pour inclure des sources (e.g. srcs/*.c mais attention a ne pas inclure les .spec.c (voir plus bas)
- **headers**: indiquez ici les dossiers contenant vos headers, e.g. /path/includes /libpath/includes

**2) Créez un fichier ft_strlen.spec.c**
```c
#include <moulitest.h>

size_t ft_strlen(char *s); // ou inclure le .h

static void simpleString_returnLength(t_test *test)
{
	mt_assert(ft_strlen("le tdd c'est cool") == 17);
}

void	suite_ft_strlen(t_suite *suite)
{
	SUITE_ADD_TEST(suite, simpleString_returnLength);
}
```

- **convention**: le nom de la suite est basé sur celui du fichier (suite_NOM_DU_FICHIER). Si le fichier tests se nomme ```ft_strlen.spec.c```, le proto de la fonction de la suite sera ```void suite_ft_strlen(t_suite *suite)```

**3) Créez votre fichier ft_strlen.c**
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

## Consignes pour l'atelier TDD du mardi 10 fév

Codez une calculatrice qui prendra en argument une string et qui imprimera le resultat.
Evidement vous testerez toutes vos fonctions avec la methodologie TDD et le framework présentez ci-dessus.
```
$ ./ft_calc "6 * 7"  
-> 42
```

De préférence, trouvez un binôme et codez à deux sur un même poste.

**Niveau 1:**
- gerer les operateurs simple (+, -, *, /, %)  

**Niveau 2:**
- gerer les parentheses et la precedence des operateurs 
```
$ ./ft_calc "6 * (6 + 1)"
-> 42
```
**Niveau 3:**
- gerer les nombres de taille potentiellement infini (infinit_mult de l'exam mais en mieux !)
```
$./ft_calc "42424242424242424242424242424242 * (424242424242424242424242424242 + 424242424242424242424242)"
-> 17998181450872359963269054178108910927276400367309458218549128
```

Bisous
