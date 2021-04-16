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