#include "tree.h"



int main() {

	node_t* x = tree_create(2);
	node_t* y = tree_create(5);
	

	node_t *a; 

	a = (node_t*)malloc(2 * sizeof(node_t));
	a[0] = *x;
	a[1] = *y;



	return 0;
}





