#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib.h"
//INSERT FRONT

struct Node* insert_front(struct Node* root, struct Data data) {
	struct Node *new_node = malloc(sizeof(struct Node));
	
	memcpy ( &((*new_node).data), &data, sizeof(struct Data));
	new_node->next = NULL;
	
	if (root == NULL){
		return new_node;
	}
	
	
	new_node->next = root;
	
	return new_node;
}

//INSERT END

struct Node* insert_end(struct Node* root, struct Data data) {
	struct Node *new_node = malloc(sizeof(struct Node));
	
	memcpy ( &((*new_node).data), &data, sizeof(struct Data));
	new_node->next = NULL;
	
	if (root == NULL){
		return new_node;
	}
	
	struct Node* temp = root;
	while (temp->next != NULL){	
		temp = temp->next;
	}
	temp->next = new_node;
	
}
//INSERT MIDDLE  
//help :  https://www.youtube.com/watch?v=tta6BIiIIFI

struct Node* insert_middle(struct Node* root, struct Data data) {
	struct Node *new_node = malloc(sizeof(struct Node));
	
	int middle;
	int count = 0;
	int list_size;
	
	
	memcpy ( &((*new_node).data), &data, sizeof(struct Data));
	new_node->next = NULL;
	
	if (root == NULL){
		return new_node;
	}		
	struct Node* temp = root;	
	struct Node* trail = temp;
	list_size = size(temp);
	middle = list_size / 2;	
	
	//printf("\n#######Middle is: %d\n", middle);
	
	while (temp->next != NULL){
	  count ++;
	  if (middle == count)
	  break;
		temp = temp->next;
		trail = temp;
	}
	if (temp == NULL){
	printf("/nERROR: Node was NULL");
	}
	new_node->next = temp;
	trail->next = new_node;
	
}


//INSERT FRONT 2

struct Node* insert_front_2(struct Node* root, char* name, int age) {
	struct Node *new_node = malloc(sizeof(struct Node));
	
	memcpy ( name, &((*new_node).data.name), sizeof(char)*NAME_LENGTH);
	new_node->data.age = age;
	
	new_node->next = NULL;
	
	if (root == NULL){
		return new_node;
	}
	
	
	new_node->next = root;
	
	return new_node;

}

// GET DATA

struct Data* get_data() {
	struct Data *data = malloc(sizeof(struct Data));
	printf("Enter name: ");
	scanf("%s", (data->name));
	printf("Age: ");
	scanf("%d", &(data->age));
	return data;
}


// LIST SIZE (used for counting length of linked list and for finding middle)

int size(struct Node* root){
  
  //struct Node* temp = root;
  int count = 0;
  
	while (root != NULL){
	  count ++;
		root = root->next;    
}

return count;

}


// PRINT DATA

void print_data(struct Data* data){
	if(data==NULL){
		printf("ERROR: Data was NULL\n");
	}
	printf("{%s, ", data->name);
	printf("%d} \n", data->age);
}

void print_node(struct Node* node){
	if(node==NULL){
		printf("ERROR: Node was NULL\n");
	}
	printf("Node: ");
	print_data(&(node->data));
	printf("\n");
}

void print_linked_list(struct Node* root) {
	if(root == NULL) {
		printf("ERROR: Root was NULL\n");
	}
	struct Node *temp = root;
	while(temp != NULL) {
		print_node(temp);
		temp = temp->next;
	}
}
