#include "allocator.h"

node_t* create_node(void *value)
{
    node_t *node = NULL;
    if(value)
    {
        node = (node_t*) malloc(sizeof(node_t));
        node->value = value;
        node->next = NULL;
        node->previous = NULL;
    }
    return node;
}

node_t* release_node(node_t *node) 
{
    if(node)
    {
        free(node);
        node = NULL;
    }
	return node;
}

void print_node(node_t *node)
{
    if(node)
    {
        printf("node_t [value = %p, previous = %p, next = %p]\n",node->value,node->previous, node->next);
    }
    else
    {
        printf("%s: %s - Nothing to print as given node is NULL");
    }
}