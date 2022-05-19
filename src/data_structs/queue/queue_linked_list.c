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
	Node* end;
	int is_full;
}typedef Queue;

struct Queue* init_queue(int size_s){
	// Allocate space for queue
	struct Queue* q = malloc(1 * sizeof(Queue*));
	int size = size_s;
	
	// Init first node
	Node* curr_node = malloc(1 * sizeof(Node*));
	curr_node->next = NULL;
	curr_node->data = -1;
	curr_node->id = 0;
	// init nodes in list of size= 
	while (curr_node->id != (size-1))
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

	// TODO: Need to still set these
	q->front = NULL;
	q->end = NULL;


	return new_q;
}



void main(){

	return;
}
