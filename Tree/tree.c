#include <stdio.h>
#include "tree.h"



node_t* tree_create(int key) {
	node_t* node = NULL;

	node = (node_t*)malloc(sizeof(node_t));
	node->key = key;
	node->descend = NULL;

	return node;
};

void tree_traverse(node_t* root) {};

node_t* tree_search(node_t* root, int key){
};

node_t* tree_add(node_t* root, int key) {
	
	if (root == NULL) {
		return NULL;
	}

	node_t* node = NULL;


	node = (node_t*)realloc(node, sizeof(node_t));

	node->key = key;
	node->descend = NULL;
	if (root->descend == NULL) {
		root->descend = malloc(sizeof(node_t));
		root->descend->node = node;
		root->descend->next = NULL;
	}
	else {
		while (root->descend->next != NULL)
			root->descend = root->descend->next;
		root->descend->next =malloc(sizeof(node_t));
		root->descend->next->node = node;
		root->descend->next->next = NULL;
	}
	return root; 
};




