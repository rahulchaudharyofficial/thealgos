
#include<assert.h>
#include "list.h"
#include "logging.h"
#define MAX_LIST_SIZE 5


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
    printf("head [id = %p, value = %d, previous = %p, next = %p]\n",head,*((int*)(head->value)),head->previous,head->next);
    int input[MAX_LIST_SIZE];

    for(int i=0;i< MAX_LIST_SIZE; i++)
    {
        input[i] = (i+1);
    }

    for(int i=0;i<MAX_LIST_SIZE;i++)
    {
        add_node(head, (input+i));
    }
    travere(head);
}

int main(int argc, char const *argv[])
{
    test_create_list();
    test_add_node();
    return 0;
}
