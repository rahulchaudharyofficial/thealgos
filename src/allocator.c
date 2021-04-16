#ifndef _ALLOCATOR_H_
#define _ALLOCATOR_H_
	struct Collection {
		void *value;
		struct Collection *next;
		struct Collection *previous;
	};

	typedef struct Collection node_t;

	node_t* create_node(void*);
	node_t* release_node(node_t*);
#endif
