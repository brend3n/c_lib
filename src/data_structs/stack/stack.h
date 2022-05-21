#ifndef STACK_H
#define STACK_H
#include "./../node/node.h"
struct Stack{
    struct Node* top;
    int size;
    int capacity;
}typedef Stack;

#endif
