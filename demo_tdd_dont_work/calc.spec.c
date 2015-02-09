#include <libft.h>
#include <moulitest.h>

int		calc(char *str);

static void simpleAdd_returnSum(t_test *test)
{
    mt_assert(calc("2 + 2") == 4);
}

static void complexAdd_returnSum(t_test *test)
{
    mt_assert(calc("22 + 22") == 44);
}

void    suite_calc(t_suite *suite)
{
    SUITE_ADD_TEST(suite, simpleAdd_returnSum);
    SUITE_ADD_TEST(suite, complexAdd_returnSum);
}