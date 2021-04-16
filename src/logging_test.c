#include "logging.h"

void test_log_test_pass()
{
    log_test_pass(COLOR_GREENN,__FILE__,__func__);
}

void test_log_test_fail()
{
    log_test_fail(COLOR_GREENN,__FILE__,__func__);
}

int main(int argc, char const *argv[])
{
    test_log_test_pass();
    test_log_test_fail();
    return 0;
}
