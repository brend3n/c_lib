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

void init();
void insert(struct Node*, void*);
void append(struct Node*, void*);
void delete(struct Node*, void*);
void search(struct Node*, void*);
void sort(struct Node*);
void print(struct Node*);
void list_free(struct Node*);


void main(){

    return;
}



