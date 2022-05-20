#ifndef L_LIST_H
#define L_LIST_H
#include "../../node/node.h"

/*
 * Supported functions:
 *  1. init()
 *  2. insert()
 *  3. append()
 *  4. delete()
 *  5. search()
 *  6. sort()
 *  7. print()
 *  8. free()
 *
*/

struct List {
    // Reference to head of list
    struct Node* head;
    struct Node* tail;
    // Number of nodes in the list
    int size;
};
#endif