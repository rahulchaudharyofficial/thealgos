#include "list.h"
#include "allocator.h"
#include "logging.h"
#include<stdio.h>

const char *required_param_message = "Required param is null\n";
const char *memory_allocation_message = "Failed to allocate memory when creating list\n";

node_t* create_list()
{
    node_t *head = (node_t*) malloc(sizeof(node_t));
    if(head)
    {
        int size = 0;
        int *ptr = &size;
        head->value = ptr;
        head->next = NULL;
        head->previous = NULL;
    }
    else{
        log_message(COLOR_RED,memory_allocation_message);
    }
    return head;
}

node_t* add_node(node_t* head,void* value)
{
    printf("head value = %d\n",*((int*)(head->value)));
    if(head)
    {
        node_t *node = create_node(value);
        if(node)
        {
            int *result_ptr = (int*) (head->value);
            *result_ptr = *result_ptr + 1;
            head->value = result_ptr;

            if(*result_ptr == 0 || head->next == NULL) //Add first node
            {
                head->next = node;
                head->previous=node;
            }
            else //Add node at the end
            {
                node_t *temp = head;
                while(temp->next!=NULL)
                {
                    temp = temp->next;
                }
                temp->next = node;
                node->previous = temp;
                head->previous = node;
            }
        }
        else
        {
            log_message(COLOR_RED,memory_allocation_message);
        }
    }
    else{
        log_message(COLOR_RED,required_param_message);
    }
    return head;
}

node_t* remove_node(node_t* head,node_t* node)
{
    return NULL;
}

node_t* get_node(node_t* head,void* value)
{
    return NULL;
}

void travere(node_t* head)
{
    node_t *temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
        printf("%d\t",*((int*)(temp->value)));
    }
    printf("\n");
}