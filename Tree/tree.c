#include <stdio.h>
#include "tree.h"



node_t* tree_create(int key) {
	node_t* node;

	node = (node_t*)malloc(sizeof(node_t));
	node->key = key;
	node->nodes = NULL;
	node->nodes_num = 0;
	return node;
};

node_t* tree_add(node_t* node, int key) {
	node_t* new_node;

	new_node = (node_t*)malloc(sizeof(node_t));
	new_node->key = key;
	new_node->nodes = NULL;

	node->nodes = (node_t*)realloc(node->nodes, sifeof(node->nodes) + sizeof(node));

}