#include "tree.h"
#define MARKER -1


TNode* node_create(int key) {

	TNode* node = (TNode*)malloc(sizeof(TNode));
	node->key = key;
	for (int i = 0; i < N; i++) {
		node->desc[i] = NULL;
	}
	return node;
};


TNode* tree_add(TNode* root, int key) {

	TNode* node = (TNode*)malloc(sizeof(TNode));
	node->key = key;
	int i = 0;
	while (root->desc[i] != NULL && i < N) {
		i++;
	}
	if (root->desc[i] == NULL) {
		root->desc[i] = node;
		return root;
	}
	else if ( root->desc[i] != NULL && i > N) {
		return NULL;
	}
}

int deserialize(TNode* root, FILE* fp) {
	int val;
	if (!scanf(fp, " % d", &val) || val == MARKER) {
		return 1;
	}
	root = node_create(val);
	for (int i = 0; i < N; i++) {
		if (deserialize(root->desc[i], fp))
			break;
	}
	return 0;
}