#include <unity.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_shouldFail(void)
{
	TEST_FAIL();
}

int main(void)
{
	UNITY_BEGIN();

	RUN_TEST(test_shouldFail);

	return UNITY_END();
}