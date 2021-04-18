#ifndef _ALLOCATOR_H_
#define _ALLOCATOR_H_
	#include<stdio.h>
	#include<stdlib.h>
	struct Collection
	{
		void *value;
		struct Collection *next;
		struct Collection *previous;
	};

	typedef struct Collection node_t;
	node_t* create_node(void*);
	node_t* release_node(node_t*);
	void print_node(node_t *node);
#endif
