#include <moulitest.h>

size_t	ft_strlen(const char *s); // proto

static void shortString_returnLength(t_test *test)
{
	mt_assert(ft_strlen("aaa") == 3);
}

static void largerString_returnLength(t_test *test)
{
    mt_assert(ft_strlen("1234567890") == 10);
}

void	suite_ft_strlen(t_suite *suite)
{
	SUITE_ADD_TEST(suite, shortString_returnLength);
	SUITE_ADD_TEST(suite, largerString_returnLength);
}
