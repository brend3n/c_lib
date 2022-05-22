// Standard includes
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Node
#include "tree.h"

int id = 0;

struct Tree* new_tree(){
	return malloc(sizeof(Tree*));
}

void add_child(Tree* t, int data){
	if(!t->root){
		t->root = malloc(sizeof(TreeNode*));
		t->root->data = data;
		t->root->node_id = id++;
	}else{
		
	}
}

void add_parent(){

}

bool find_node(int data){

}
void remove_node(int node_id){

}


void main(){
	Tree* t = new_tree();


}
