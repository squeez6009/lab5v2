
#define NAME_LENGTH 50


/* STRUCT */
struct Data{
	char name[NAME_LENGTH];
	int age;
};

struct Node{
	struct Data data;
	struct Node *next;
};

/* Linked List Functions */
struct Node* insert_front(struct Node* root, struct Data data);
struct Node* insert_end(struct Node* root, struct Data data);
struct Node* insert_middle(struct Node* root, struct Data data);
struct Node* insert_front_2(struct Node* root, char* name, int age);

/* Input/Output */
struct Data* get_data();
int size(struct Node* root);
void print_data(struct Data* data);
void print_node(struct Node* node);
void print_linked_list(struct Node* root);

