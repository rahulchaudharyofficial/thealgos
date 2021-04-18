#include "allocator.h"
#include "logging.h"
#include<assert.h>
#include<stdio.h>

void test_create_node_with_null_value() {
    UNIT_TEST_PASS_MESSAGE = "%sTest : %s -  Test case %s passed\n";
    int *ptr = NULL;
    node_t *result = create_node(ptr);
    assert(result==NULL);
    log_test_pass(COLOR_GREENN,__FILE__,__func__);
}

void test_create_node_without_null_value() {
    UNIT_TEST_PASS_MESSAGE = "%sTest : %s -  Test case %s passed\n";
    int x = 10;
    int *ptr = &x;
    node_t *result = create_node(ptr);
    assert(result!=NULL);
    int *result_ptr = (int*) (result->value);
    assert(*ptr == *result_ptr);
    log_test_pass(COLOR_GREENN,__FILE__,__func__);
}

void test_release_node_with_null_value() {

}

void test_release_node_without_null_value() {

}

/**
int main(int argc, char const *argv[])
{
    test_create_node_with_null_value();
    test_create_node_without_null_value();
    return 0;
}
*/