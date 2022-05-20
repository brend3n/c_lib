#include <stdio.h>
#include <stdlib.h>


struct Node{
	int data;
	int id;
	struct Node* next;
	
}typedef Node;

struct Queue{
	int size;
	int capacity;
	Node* front;
	Node* next_to_fill;
}typedef Queue;

struct Queue* init_queue(int size_s){

	int id_val = 0;

	// Allocate space for queue
	struct Queue* q = malloc(sizeof(Queue*));
	q->size = size_s;
	q->front = malloc(sizeof(Node*));
	q->front->next = NULL;
	q->next_to_fill = malloc(sizeof(Node*));
	q->next_to_fill->next = NULL;

	
	// Init head node
	Node* curr_node = malloc(sizeof(Node*));
	curr_node->next = NULL;
	curr_node->data = -1;
	curr_node->id = id_val++;

	// Set the front of the queue
	q->front = q->next_to_fill = curr_node;

	// Init new node
	Node* temp = q->front;

	// init nodes in list of size= 
	int counter = 0;
	while(counter < (size_s - 1)){

		temp->next = malloc(sizeof(Node*));
		temp->next->data = -1;
		temp->next->id = id_val++;
		temp = temp->next;
		counter++;
	}


	return q;
}

// Insert into the back of the queue
void enq(Queue* q, int data){
	
	q->next_to_fill->data = data;
	q->capacity++;
	q->next_to_fill = q->next_to_fill->next; 	

	return;
}

// Pop the first element of the queue
int deq(Queue* q){

	Node* temp = q->front;
	// Get the element
	int element = q->front->data;
	q->front = q->front->next;
	q->capacity--;

	free(temp);
	return element;
}

void print_queue_info(Queue* q){
	printf("q size: %d\n", q->size);
	printf("q capacity: %d\n", q->capacity);
	
	Node* temp = q->front;
	printf("Data: ");
	while(temp != NULL){
		printf("%d%s", temp->data, " ");
		temp = temp->next;
	}
	printf("\n");
}


void main(){
	Queue* q = init_queue(3);
	print_queue_info(q);
	enq(q,3);
	print_queue_info(q);
	enq(q,2);
	enq(q,4);
	print_queue_info(q);
	deq(q);
	print_queue_info(q);
	
	return;
}
