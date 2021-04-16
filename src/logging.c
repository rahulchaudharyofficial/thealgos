#include<stdio.h>
#include "logging.h"

void log_test_pass(const char *color,const char *file_name,const char *test_name)
{
    UNIT_TEST_PASS_MESSAGE = "%sTest:%s -  test method %s passed\n";
    printf(UNIT_TEST_PASS_MESSAGE,color,file_name,test_name);
    printf("%s\n",COLOR_RESET);
}

void log_test_fail(const char *color,const char *file_name,const char *test_name)
{
    UNIT_TEST_PASS_MESSAGE = "%sTest:%s -  test method %s passed\n";
    printf(UNIT_TEST_PASS_MESSAGE,color,file_name,test_name);
    printf("%s\n",COLOR_RESET);
}

void log_message(const char* color,const char* message)
{
    printf("%s%s\n",color,message);
    printf("%s\n",COLOR_RESET);
}