#include <project.h>

static void test1(t_test *test)
{
	// test->debug = 1;
	mt_assert_sh_stdout(test,
		"echo 123456789 | wc\n"
		"exit\n",
		"grep 10");
}

void	suite_sh2_01_pipeline(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test1);
}
