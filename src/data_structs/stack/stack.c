#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

#define STACK_SIZE 10
#define DEF_VAL -1024


Stack* init_stack(int size){
    // Init stack
    Stack* s = malloc(sizeof(Stack*));
    s->size = size;
    s->capacity = 0;


    Node* temp = malloc(sizeof(Node*));
    s->top = temp;
    while(s->capacity < (s->size)){
        temp->data = DEF_VAL;
        temp->next = malloc(sizeof(Node*));
        temp = temp->next;
        s->capacity++;
    }

    printf("Done init\n");
    return s;
}
// Push data into the head
void push(Stack* s, int data){
    Node* temp = malloc(sizeof(Node*));
    temp->data = data;
    temp->next = s->top;
    s->top = temp;
}

// Pop data out of the head
int pop(Stack* s){
    int val = s->top->data;
    Node* temp = s->top;
    s->top = s->top->next;
    free(temp);
    return val;
}
void print_stack(Stack* s){

    printf("Data: ");
    Node* temp = s->top;
    while(temp->next != NULL){
        printf("%d%s", temp->data, " ");
        temp = temp->next;
    }
    printf("\n");
}
void main(){
    Stack* s = init_stack(STACK_SIZE);
    print_stack(s);
    push(s, 4);
    push(s, 32);
    pop(s);
    push(s,999);
    push(s,3);
    push(s,222);
    push(s,213123);
    print_stack(s);
}