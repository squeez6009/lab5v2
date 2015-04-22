#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib.h"

int main() {

while(loopMenu()==1);

	return 0;
	}

int writeMenu(int *choice)
{
	printf("\n\nThis program creates and manipulates linked lists:\n");
	printf("\n1. Insert node at front of list.\n2. Insert node in middle of list.");
	printf("\n3. Insert node at end of list.\n4. Delete first node of list.");
	printf("\n5. Delete middle node of list.\n6. Delete node at end of list.");
	printf("\n7. Traverse list.\n8. Print List\n");
	printf("\n9. Exit Program\n");
	printf("Please make a choice [1-9]: ");
	scanf("%d", choice);

	/* Validation */
	switch(*choice)
	{
		case 1:
			return 1;  // Return 1, the menu option selected
			break;
		case 2:
			return 2;  // Return 2, the menu option selected
			break;
		case 3:
			return 3;  // Return 3, the menu option selected
			break;
		case 4:
			return 4;  // Return 4, the menu option selected
			break;
        case 5:
			return 5;  // Return 5, the menu option selected
			break;
        case 6:
			return 6;  // Return 6, the menu option selected
			break;
        case 7:
			return 7;  // Return 7, the menu option selected
			break;
        case 8:
			return 8;  // Return 8, the menu option selected
			break;
			case 9:
			return 9;  // Return 9, the menu option selected
			break;
		default:
			printf("\n\nThat choice was invalid.  Please choose a valid menu item, values 1 throuh 8 are acceptable.\n\n");
			// Clear scan flag
			clean_stdin();
			return 0;  // Return 0 as an error code for no proper selection.
			break;
	}
}




int loopMenu()
{
    int list_size;
	struct Node* root;
	struct Data* new_data;
	
	/* A value to hold the menu item chosen */
	int menuChoice = 0;
	/* Show the main menu for user selection */
	while(writeMenu(&menuChoice)==0);

	/* User has made a decision at this point, run switch case */
	printf("\n");
	switch(menuChoice)
	{
	    // Insert node in front of list.

        case 1:
            printf("Insert node in front of list:\n");
            clean_stdin();
            new_data = get_data();
	          print_data(new_data);	
	          root = insert_front(root, *new_data);
	          list_size = size(root);
            printf("\nList is %d long.\n", list_size);

	          print_linked_list(root);
            break;
        // Insert node in middle of list.
        case 2:
            printf("Insert in middle of list: \n");
            clean_stdin();
            new_data = get_data();
            print_data(new_data);	
	          root = insert_middle(root, *new_data);
	          list_size = size(root);
            printf("\nList is %d long.\n", list_size);

	          print_linked_list(root);
            break;
        // Insert node at end of list.
        case 3:
            printf("Insert in end of list: \n");
            clean_stdin();
            new_data = get_data();
            print_data(new_data);	
	          root = insert_end(root, *new_data);
	          list_size = size(root);
            printf("\nList is %d long.\n", list_size);

	          print_linked_list(root);
            break;
        // Delete first node of list.
        case 4:
            printf("Delete first node: \n");
            clean_stdin();
            root = remove_front(root);
            printf("Press enter to continue.\n");
            break;
        // Delete middle node of list.
        case 5:
            printf("Delete middle node: \n");
            clean_stdin();
            
            printf("Press enter to continue.\n");
            break;
        // Delete node at end of list.
        case 6:
            clean_stdin();
            printf("\n\n\nDelete node from end of list: \n");
            
            printf("\nPress enter to continue.\n");
            break;
        // Traverse list
        case 7:
            clean_stdin();
            
            printf("Press enter to continue.\n");
            break;
            // Print list
        case 8:
        
            clean_stdin();
            printf("\n\nPrint out linked list: \n");
            list_size = size(root);
            printf("\nList is %d long.\n", list_size);

	          print_linked_list(root);
            printf("\nPress enter to continue.\n");
            break;
        // Exit the program
        case 9:
            printf("\nClosing program!\n");
            exit(0);
            break;

	}
	clean_stdin();
	return 1;
}
int clean_stdin()
{
    while (getchar()!='\n');
    return 1;
}







  /*int list_size;
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
}*/
