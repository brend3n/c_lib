#include <stdio.h>
#include <stdlib.h>


struct Node{
	int data;
	struct Node* next;
	int id;
}typedef Node;

struct Queue{
	int size;
	Node* front;
	Node* next_to_fill;
	int capacity;
}typedef Queue;

struct Queue* init_queue(int size_s){
	// Allocate space for queue
	struct Queue* q = malloc(1 * sizeof(Queue*));
	q->size = size_s;
	q->front = malloc(sizeof(Node*));
	q->next_to_fill(malloc(sizeof(Node*));

	
	// Init first node
	Node* curr_node = malloc(1 * sizeof(Node*));
	curr_node->next = NULL;
	curr_node->data = -1;
	curr_node->id = 0:

	// init nodes in list of size= 
	while (curr_node->id != (q->size-1))
	{
		// Init new node
		Node* temp_node = malloc(1 * sizeof(Node*));
		temp_node->next = NULL;
		temp_node->data = -1;
		temp_node->id = curr_node->id + 1;
	
		// Set next node
		curr_node->next = temp_node;

		// Update current node
		curr_node = temp_node;
	}

	// Set the front of the queue
	q->front = q->next_to_fill = curr_node;

	return new_q;
}

// Insert into the back of the queue
void enq(Queue* q, int data){

	if(q->capacity < q->size){
		q->next_to_fill->data = data;
		q->capacity++;
		
		Node*temp = 	
	}else{;}
	return;
}

// Pop the first element of the queue
int deq(Queue* q){

	// Get the element
	int element = q->front->data;

	// Move back the front of the queue
//	TODO
	// Free the hanging node from the list
//	TODO
	return element;
}


void main(){
	Queue* q = init_queue(3);

	return;
}
