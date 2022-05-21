#ifndef TREE_H
#define TREE_H

struct TreeNode{
    int data;
    int node_id;
    struct Node** children;
}typedef TreeNode;

struct Tree{
    int size;
    struct TreeNode* root;
}typedef Tree;

#endif
