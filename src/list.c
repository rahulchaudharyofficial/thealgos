#include "list.h"
#include "allocator.h"
#include "logging.h"
#include<stdio.h>

const char *list_exist_message = "List already exist\n";
const char *required_param_message = "Required param is null\n";
const char *memory_allocation_message = "Failed to allocate memory when creating list\n";
node_t *head = NULL;
void create_list()
{
    
    if(head == NULL)
    {
        head = (node_t*) malloc(sizeof(node_t));
        if(head)
        {
            int size = 0;
            int *ptr = &size;
            head->value = ptr;
            head->next = NULL;
            head->previous = NULL;
        }
        else
        {
            log_message(COLOR_RED,memory_allocation_message);
        }
    }
    else{
        log_message(COLOR_RED,list_exist_message);
    }
}

void add_node(node_t* head,node_t* node)
{
    if(head && node) 
    {
        node_t *temp = head;
        printf("head [value = %d, previous = %p, next = %p]\n",*((int*) head->value),head->previous,head->next);
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = node;
        node->previous = temp;
        head->previous = node;
        int head_value = *((int*) head->value) + 1;
        printf("head value = %d\n", head_value);
        head->value = &head_value;
    }
    else{
        log_message(COLOR_RED,required_param_message);
    }
}

void remove_node(node_t* head,node_t* node)
{
    return;
}

node_t* get_node(node_t* head,node_t* value)
{
    return NULL;
}

void travere(node_t* head)
{
    node_t *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
        printf("%d\n",*((int*)(temp->value)));
    }
    printf("\n");
}