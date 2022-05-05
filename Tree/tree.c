#include <stdio.h>
#include "tree.h"



node_t* tree_create(int key) {
	node_t* node;

	node = (node_t*)malloc(sizeof(node_t));
	node->key = key;
	return node;
};

void tree_traverse(node_t* root) {};

node_t* tree_search(node_t* root, int key){
	if (root == NULL) {
		return NULL;
	}

	if (key == root->key) {
		return root;
	}
	
	
};

node_t* tree_add(node_t* root, int key) {};