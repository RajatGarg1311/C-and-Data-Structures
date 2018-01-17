#ifndef Linked_list_H
#define Linked_list_H

//decleare a structure for link list

struct Linked_list
{
	int data;
	struct Linked_list *next;        //pointer variable is only allowed as a struct variable
	
}; 



struct Linked_list* create_node();
void display_Linked_list(struct Linked_list*);
struct Linked_list* add_at_begin(struct Linked_list*);
struct Linked_list* add_at_end(struct Linked_list *);
struct Linked_list* add_at_between(struct Linked_list *);
struct Linked_list* delete_at_begin(struct Linked_list *);
struct Linked_list* delete_at_end(struct Linked_list *);
struct Linked_list* delete_at_between(struct Linked_list *);
struct Linked_list* reverse_list(struct Linked_list *);
#endif
