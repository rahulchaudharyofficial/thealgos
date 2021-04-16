#ifndef _TEST_CONST_H_
#define _TEST_CONST_H_
    #define COLOR_RESET  "\x1B[0m"
    #define COLOR_RED  "\x1B[31m"
    #define COLOR_GREENN  "\x1B[32m"
    #define COLOR_YELLOW  "\x1B[33m"
    #define COLOR_BLUE  "\x1B[34m"
    #define COLOR_MAGENTA  "\x1B[35m"
    #define COLOR_CYAN  "\x1B[36m"
    #define COLOR_WHITE  "\x1B[37m"

    const char *UNIT_TEST_PASS_MESSAGE;
    const char *UNIT_TEST_FAIL_MESSAGE;

    void log_test_pass(const char*,const char*,const char*);
    void log_test_fail(const char*,const char*,const char*);
    void log_message(const char*,const char*);
#endif