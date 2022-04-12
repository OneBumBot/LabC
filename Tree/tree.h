#ifndef __TREE__
#define __TREE__

#include <stdlib.h>

typedef struct node {
	int key;
	struct node* left, * right;
} node_t;



//Функция, создающая дерево
node_t* tree_create(int key);



//Функция, проходящаяся по дереву
void tree_traverse(node_t* root);



//
node_t* tree_search(node_t* root, int key);



//
node_t* tree_add(node_t* root, int key);
#endif