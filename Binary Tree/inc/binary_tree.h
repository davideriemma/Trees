#ifndef BINARY_TREE_H_
#define BINARY_TREE_H_

struct binary_tree_to_typedef
{
    int data;
    struct binary_tree_to_typedef * left;
    struct binary_tree_to_typedef * right;    
};

typedef binary_tree_to_typedef Binary_tree;

int binary_tree_init(Binary_tree **);
void binary_tree_insert(Binary_tree **);
void binary_tree_free(Binary_tree **);

#endif