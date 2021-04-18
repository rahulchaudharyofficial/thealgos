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
    node_t *node = NULL;
    if(head && value)
    {
        node = create_node(value);
        if(node)
        {
            node_t *temp = head;
            if(temp->next == NULL)
            {
                head->next = node;
                head->previous = node;
                node->previous = head;
                int count = 1;
                head->value = &count;
            }
            else
            {
                while(temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = node;
                node->previous = temp;
                head->previous = node;
                int counter = *((int*) head->value) + 1;
                head->value = (int*) &counter;
            }
        }
    }
    else{
        log_message(COLOR_RED,required_param_message);
    }
    return node;
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
    printf("head [id = %p, value = %d, previous = %p, next = %p]\n",temp, *((int*)(head->value)),head->previous,head->next);
    while(temp->next != NULL) {
        temp = temp->next;
        printf("node [id = %p, value = %d, previous = %p, next = %p]\n",temp, *((int*)(temp->value)),temp->previous,temp->next);
    }
    printf("\n");
}