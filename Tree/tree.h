#ifndef __TREE__
#define __TREE__

#include <stdlib.h>


typedef struct node_list {
	struct node* node;
	struct node_list* next;
} node_list_t;

typedef struct node{
	int key;
	node_list_t* descend;
} node_t;

//Tree create
node_t* tree_create(int);

//Read tree nodes
void tree_traverse(node_t*);

//Find an element in tree 
node_t* tree_search(node_t*, int);

//Add an element in tree
node_t* tree_add(node_t*, int);
#endif