#include "l_list.h"

// Allocate space for list
struct List* new_list(){
    struct List* listy = malloc(1 * sizeof(struct List*));
    listy->head = NULL;
    listy->tail = NULL;
    listy->size = 0;
    return listy;
}
void insert(struct List* list, void* data, int pos){
    return;
}
void append(struct List* list, void* data){
    return;
}
void delete(struct List* list, void* data){
    return;
}
void search(struct List* list, void* data){
    return;
}
void sort(struct List* list){
    return;
}
// void print(struct List* list){
//     int list_size = list->size;
//     for(int i = 0; i < list_size; i++){
//         printf("");
//     }
//     return;
// }
void list_free(struct List* list){
    return;
}
struct Node* new_node(){
    return malloc(sizeof(struct Node*) * 1);
}
void node_free(struct List* list, int node_pos){
    struct Node* temp = *(list->head);
    for (int i = 0; i < node_pos; i++){
        temp = temp->next;
    }
    free(temp->data);
    free(temp);
    return;
}
void push(struct List* list, void* data){

    struct Node* temp;
    if(list->head == NULL){
        temp = new_node();
    }

    if (list->size == 0){
        // Nothing in the list
        // Head and Tail are the same when node is added to list
        *(list->head) = *(list->tail) = temp;
    }else{
        // Something already in the list
        // Only tail is updated
        temp->next = NULL;
        *(list->tail) = temp;
    }

    // Update size
    list->size++;
}
void pop(struct List* list){
    // Return and remove the node at position == list->size
}

void main(){
    struct List* l = new_list();
    push(l, (int)5);
    push(l, (int)3);
    push(l, (int)2);
    pop(l);
    printf("Finished running.");
    return;
}



