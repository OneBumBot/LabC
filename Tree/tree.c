#include <stdio.h>
#include "tree.h"

#include "tree.h"



node_t* tree_create(int key) {
	node_t* node;

	node = (node_t*)malloc(sizeof(node_t));
	node->key = key;
	node->left = NULL;
	node->right = NULL;

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
	
	if (key < root->key) {
		return tree_search(root->left, key);
	}
	else {
		return tree_search(root->right, key);
	}
};

node_t* tree_add(node_t* root, int key) {};