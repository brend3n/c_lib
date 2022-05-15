#include <stdio.h>
#include <stdlib.h>

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

// Struct for Node with generic datatype
struct Node {
    void* data;
    struct Node* next;
};

struct List {
    // Reference to head of list
    struct Node** head;
    struct Node** tail;
    // Number of nodes in the list
    int size;
};
