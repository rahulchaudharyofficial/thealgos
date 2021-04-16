#include<stdio.h>
#include "logging.h"

void log_test_pass(const char *color,const char *file_name,const char *test_name)
{
    UNIT_TEST_PASS_MESSAGE = "%sTest : %s -  Test case %s passed\n";
    printf(UNIT_TEST_PASS_MESSAGE,color,file_name,test_name);
    printf("%s\n",COLOR_RESET);
}

void log_test_fail(const char *color,const char *file_name,const char *test_name)
{
    UNIT_TEST_PASS_MESSAGE = "%sTest : %s -  Test case %s passed\n";
    printf(UNIT_TEST_PASS_MESSAGE,color,file_name,test_name);
    printf("%s\n",COLOR_RESET);
}