#include "tree.h"
int test() {
	TNode* x = NULL;

	if (x != NULL) {
		return 1;
	}

	x = node_create(2);
	if (x == NULL) {
		return 2;
	}

	tree_add(x, 7);
	tree_add(x, 9);

	if (x->desc[0] == NULL) {
		return 3;
	}

	if (x->desc[1] == NULL) {
		return 4;
	}

	if (x->desc[2] != NULL) {
		return 4;
	}

	return 0;
}


int main() {

	return test();
}
