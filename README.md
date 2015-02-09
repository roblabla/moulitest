# Moulitest: C Test Framework

> Si vous cherchez les tests pour **libft / gnl / ft_ls / ft_printf**, c'est par ici: https://github.com/yyang42/moulitest_42projects

## Sommaire

- [Documentation moulitest](#user-content-moulitest-doc)
- [Consignes pour l'atelier TDD du mardi 10 fév](#user-content-atelier-tdd)
	
<a id="moulitest-doc"></a>
## Install

```shell
$ brew install https://raw.githubusercontent.com/yyang42/moulitest/fw/moulitest.rb
```

- Ceci va installer le programme Moulitest sur votre machine.
- Ignorez ce message: "Warning: Cannot verify integrity ..."
- Si besoin, utilisez ```brew reinstall``` pour... réinstaller


## Quick Start

**1) Créez un fichier .moulitest.cfg (dans votre dossier de projet)**
```ini
[general]
sources: ft_strlen.c
headers:
```

- **sources**: vous pouvez utiliser des wildcards pour inclure des sources (e.g. srcs/*.c mais attention à ne pas inclure les .spec.c (voir plus bas)
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

- **convention**: le nom de la suite est basé sur celui du fichier (suite_NOM_DU_FICHIER). Si le fichier de tests se nomme ```ft_strlen.spec.c```, le proto de la fonction de la suite sera ```void suite_ft_strlen(t_suite *suite)```

**3) Créez votre fichier ft_strlen.c**
```
/!\ Vous croyez quand même pas que je vais vous donner mon code ! /!\
```

**4) Entrez la commande dans le dossier de votre projet**

```shell
$ moulitest
```

**Votre dossier doit ressembler à ça:**
```
dossier_project/
	- ft_strlen.c
	- ft_strlen.spec.c
	- .moulitest.cfg
```

<a id="atelier-tdd"></a>
## Consignes pour l'atelier TDD du mardi 10 fév

Codez une calculatrice qui prendra en argument une string et qui imprimera le résultat.
Evidemment vous testerez toutes vos fonctions avec la méthodologie TDD et le framework présenté ci-dessus.
```
$ ./ft_calc "6 * 7"  
-> 42
```

Vous vous mettrez en binôme et coderez à deux sur un même poste.

**Niveau 1:**
- gérez les opérateurs simple (+, -, *, /, %)  

**Niveau 2:**
- gérez les parenthèses et la précédence des opérateurs

```
$ ./ft_calc "6 * (6 + 1)"
-> 42
```
**Niveau 3:**
- gérez les nombres de taille potentiellement infinie (infinit_mult de l'exam mais en mieux !)
```
$./ft_calc "42424242424242424242424242424242 * (424242424242424242424242424242 + 424242424242424242424242)"
-> 17998181450872359963269054178108910927276400367309458218549128
```

Bisous
