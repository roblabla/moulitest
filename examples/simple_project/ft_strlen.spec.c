#include <moulitest.h>

size_t	ft_strlen(const char *s); // proto

static void test_ft_strlen(t_test *test)
{
	mt_assert(ft_strlen("aaa") == 3);
}

static void test_ft_strlen_fail(t_test *test)
{
	mt_assert(ft_strlen("aaa") == 4);
}

void	suite_ft_strlen(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test_ft_strlen);
	SUITE_ADD_TEST(suite, test_ft_strlen_fail);
}
