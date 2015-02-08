#include <fw.h>

size_t	ft_strlen(const char *s); // proto

static void test_ft_strlen(t_test *test)
{
	mt_assert(ft_strlen("aaa") == 3);
}

void	suite_ft_strlen(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test_ft_strlen);
}
