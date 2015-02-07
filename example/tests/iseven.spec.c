#include <fw.h>

static void failing_test(t_test *test)
{
	mt_assert(strcmp("aaa", "bbb") == 0);
}

static void success_test(t_test *test)
{
	mt_assert(strlen("aaa") == 3);
}


void	suite_iseven(t_suite *suite)
{
	SUITE_ADD_TEST(suite, failing_test);
	SUITE_ADD_TEST(suite, success_test);
}
