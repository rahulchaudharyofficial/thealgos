
#include<assert.h>
#include "list.h"
#include "logging.h"


void test_create_list()
{
    node_t *head = create_list();
    assert(head != NULL);
    log_test_pass(COLOR_GREENN,__FILE__,__func__);
}


void test_add_node()
{
    node_t *head = create_list();    
    assert(head != NULL);
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;
    int f = 6;
    int g = 7;
    int h = 8;
    int i = 9;
    int j = 10; 
    
    add_node(head,&a);
    add_node(head,&b);
    add_node(head,&c);
    add_node(head,&d);
    add_node(head,&e);
    add_node(head,&f);
    add_node(head,&g);
    add_node(head,&h);
    add_node(head,&i);
    add_node(head,&j);
    
    travere(head);
}

int main(int argc, char const *argv[])
{
    test_create_list();
    test_add_node();
    return 0;
}
