#include "../unity/unity.h"
#include "../src/Sogilis.h"

void setUp(void) {
}

void tearDown(void) {
}

/* Fonctions de test */

void test_function_should_return_two() {
    int result = getResult();
    TEST_ASSERT_EQUAL_INT(2, result);
}

void test_function_should_return_one() {
    int result = getResult();
    TEST_ASSERT_EQUAL_INT(1, result);
}

int main(void) {
    UNITY_BEGIN();

    /* Appel des fonctions de test */
    RUN_TEST(test_function_should_return_two);
    RUN_TEST(test_function_should_return_one);


    return UNITY_END();
}