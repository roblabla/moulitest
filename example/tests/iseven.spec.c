#include <fw.h>
#include <myheader.h>

static void failing_test(t_test *test)
{
	mt_assert(strcmp("aaa", "bbb") == 0);
}

static void success_test(t_test *test)
{
	mt_assert(strlen("aaa") == 3);
}

static void test_iseven(t_test *test)
{
	mt_assert(ft_iseven(9) == 0);
}

void	suite_iseven(t_suite *suite)
{
	SUITE_ADD_TEST(suite, failing_test);
	SUITE_ADD_TEST(suite, success_test);
	SUITE_ADD_TEST(suite, test_iseven);
}
