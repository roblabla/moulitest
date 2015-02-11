#include <moulitest.h>
#include <stdio.h>
#include <get_data.h>

static char *get_new_data_fake(void)
{
	return (strdup("fake new data"));
}

static char *get_cached_data_fake(void)
{
	return (strdup("fake cached data"));
}

static void test_cached_data(t_test *test)
{
	mt_assert(strcmp(get_data_base(0, get_new_data_fake, get_cached_data_fake), "fake cached data") == 0);
}

static void test_new_data(t_test *test)
{
	mt_assert(strcmp(get_data_base(1, get_new_data_fake, get_cached_data_fake), "fake new data") == 0);
}

void	suite_get_data(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test_cached_data);
	SUITE_ADD_TEST(suite, test_new_data);
}
