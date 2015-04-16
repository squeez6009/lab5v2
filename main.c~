#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib.h"

int main() {
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
	root = insert_middle(root, *new_data);

	print_linked_list(root);
	
	return 0;
}
