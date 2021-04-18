
#include<assert.h>
#include "list.h"
#include "logging.h"


void test_create_list()
{
    node_t *head = create_list();
    assert(head!=NULL);
    log_test_pass(COLOR_GREENN,__FILE__,__func__);
}


void test_add_node()
{
    node_t *head = create_list();
    for(int i=1;i<=10;i++)
    {
        int *ptr = &i;
        add_node(head, ptr);
    }

    travere(head);
}

int main(int argc, char const *argv[])
{
    test_create_list();
    test_add_node();
    return 0;
}
