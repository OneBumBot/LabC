#ifndef __TREE__
#define __TREE__

#include <stdlib.h>

typedef struct node {
	int key;
	struct node* nodes[];
} node_t;


//Tree create
node_t* tree_create(int key);

//Read tree nodes
void tree_traverse(node_t* root);

//Find an element in tree 
node_t* tree_search(node_t* root, int key);

//Add an element in tree
node_t* tree_add(node_t* root, int key);
#endif