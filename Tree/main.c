#include "tree.h"
#include <stdio.h>



int main() {

	node_t* x = tree_create(2);

	tree_add(x, 7);

	tree_add(x, 9);

	tree_add(x, 19);

	tree_add(x, 15);

	tree_add(x, 29);

	while (x->descend->next != NULL) {
		x->descend = x->descend->next;
		printf("%d", x->descend->node->key);
	}

	return 0;
}


