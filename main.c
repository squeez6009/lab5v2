#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib.h"

int main() {
  int list_size;
	struct Node* root = NULL;	
	struct Data* new_data = get_data();
	print_data(new_data);	
	root = insert_front(root, *new_data);

	new_data = get_data();
	print_data(new_data);	
	root = insert_end(root, *new_data);
	
	new_data = get_data();
	print_data(new_data);	
	root = insert_front(root, *new_data);
	
	new_data = get_data();
	print_data(new_data);	
	root = insert_front(root, *new_data);
	
	
	root = remove_front(root);
	
	//new_data = get_data();
	//print_data(new_data);	
	//root = insert_middle(root, *new_data);

  list_size = size(root);
  printf("\nList is %d long.\n", list_size);

	print_linked_list(root);
	
	return 0;
}
