#ifndef _LIST_H_
#define _LIST_H_
    #include "allocator.h"

    void create_list();
    void add_node(node_t*,node_t*);
    void remove_node(node_t*,node_t*);
    node_t* get_node(node_t*,node_t*);
    void travere(node_t*);
#endif