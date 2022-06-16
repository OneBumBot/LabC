#ifndef __TREE__
#define __TREE__
#include <stdio.h>
#include <stdlib.h>
#define N 6


typedef struct Tnode {
    int key;
    struct Tnode* desc[N];
} TNode;





//Tree create
TNode* node_create(int);
TNode* tree_add(TNode*, int);

int deserialize(TNode*, FILE*);

//Add an element in tree

#endif

