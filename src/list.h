#ifndef _LIST_H_
#define _LIST_H_
    #include "allocator.h"

    node_t* create_list();
    node_t* add_node(node_t*,void*);
    node_t* remove_node(node_t*,void *value);
    node_t* get_node(node_t*,void*);
    void travere(node_t*);
#endif