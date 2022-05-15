#include "l_list.h"

// Allocate space for list
struct List* new_list(){
    struct List* listy = (struct List*)malloc(1 * sizeof(struct List*));
    listy->head = NULL;
    listy->tail = NULL;
    listy->size = 0;
    return listy;
}
void insert(struct List* list, int data, int pos){
    return;
}
void append(struct List* list, int data){
    return;
}
void delete(struct List* list, int data){
    return;
}
void search(struct List* list, int data){
    return;
}
void sort(struct List* list){
    return;
}
void list_free(struct List* list){
    return;
}
struct Node* new_node(){
    return malloc(1 * sizeof(struct Node*));
}
void node_free(struct List* list, int node_pos){
    struct Node* temp = list->head;
    for (int i = 0; i < node_pos; i++){
        temp = temp->next;
    }
    free(temp);
    return;
}

void push(struct List* list, int data){

    struct Node* temp;

    if(list->head == NULL){
        temp = new_node();
        temp->data = data;
        temp->next = NULL;
        list->head = temp;
    }else{
        // Traverse to last node
        while(temp->next != NULL){temp = temp->next;}

        temp->next = new_node();
        temp->next->data = data;
        temp->next->next = NULL;
    }

    // Update size
    list->size++;
}
void pop(struct List* list){
    // Return and remove the node at position == list->size
}

void print(struct List* list){
    int list_size = list->size;
    struct Node* temp = list->head;
    if (temp == NULL){
        printf("Temp is NULL\n");
        exit(1);
    }
    printf("List size: %d\n", list->size);
    for(int i = 0; i < list_size; i++){
        printf("%d%s", temp->data, ((i==list_size-1)?"\n":" "));
        temp = temp->next;
    }
    return;
}

void main(){
    struct List* l = new_list();
    push(l, 6);
    push(l, 3);
    push(l, 2);
    print(l);
    // // pop(l);
    // printf("Finished running.");
    return;
}



