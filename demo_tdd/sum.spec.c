#include <moulitest.h>

int	sum__(int nb1, int nb2);

static void simpleSum(t_test *test)
{
	mt_assert(sum__(2, 2) == 4);
}

void	suite_sum(t_suite *suite)
{
	SUITE_ADD_TEST(suite, simpleSum);
}
