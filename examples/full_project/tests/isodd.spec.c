#include <moulitest.h>
#include <myheader.h>

static void test_isodd(t_test *test)
{
	mt_assert(ft_iseven(9) == 0);
}

void	suite_isodd(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test_isodd);
}
