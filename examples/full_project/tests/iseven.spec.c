#include <moulitest.h>
#include <myheader.h>
#include <libft.h>

static void test_iseven_odd(t_test *test)
{
	mt_assert(ft_iseven(9) == 0);
}

static void test_iseven_even(t_test *test)
{
	mt_assert(ft_iseven(8) == 1);
}

void	suite_iseven(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test_iseven_odd);
	SUITE_ADD_TEST(suite, test_iseven_even);
}
