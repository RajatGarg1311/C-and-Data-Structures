#include<stdio.h>
#include<malloc.h>
#include"head.h"


struct Linked_list* create_node()
{
	struct Linked_list *head=NULL;      //allocate a memory for single structure variable / node
	
	head=(struct Linked_list*) malloc(sizeof(struct Linked_list));  //accept the value for linked list
	
	printf("\n enter the value for data\n");
	scanf("%d",&head->data);
	
	head->next=NULL;
	
	return head;
}
void display_Linked_list(struct Linked_list *begin)
{
	if (begin==NULL)
	{
		printf("\nLinked list is empty..\n");
		
	}
	else
	{
		printf("\n");
		while(begin!= NULL)
		{
			printf("%d->",begin->data);
			begin=begin->next;
		}
		printf("end\n");
	}
}

struct Linked_list* add_at_begin(struct Linked_list *begin)

{
	struct Linked_list *newnode= NULL;
	if(begin == NULL)
	{
		begin = create_node();
		
	}
	else
	{
		newnode = create_node();
		newnode->next = begin;
		begin = newnode;
	}	
	
	return begin;
	
}


struct Linked_list* add_at_end(struct Linked_list *end)
{
	//struct Linked_list *newnode= NULL;
	if(end == NULL)
	{
		end = create_node();
		
	}
	else
	{
		struct Linked_list *temp= end;
		
		while(temp->next != NULL)
		{		
			temp=temp->next;
		}
		temp->next = create_node();
		
	}	
	
	return end;
}

struct Linked_list* add_at_between(struct Linked_list *begin)
{
	int no;
	struct Linked_list *temp= begin;
	struct Linked_list *ptr=NULL;
	printf("\nenter the data after which to add");
	scanf("%d",&no);
	while(temp->data != no)
	{		
		temp =temp->next;
	}
	ptr=create_node();
	ptr->next = temp->next;
	temp->next = ptr;
	
	return begin;	
	
}
struct Linked_list* delete_at_begin(struct Linked_list *begin)
{
	struct Linked_list *temp;
	temp = begin;
	if (temp == NULL)
	{
		printf("\nlinked list is empty\n");
	}
	else
	{
		begin = begin->next;
		free(temp);
	}
	return begin;
	
}
struct Linked_list* delete_at_end(struct Linked_list *end)
{
	struct Linked_list *temp, *ptr;
	temp = end;
	if (temp == NULL)
	{
		printf("\nlinked list is empty\n");
	}
	else
	{
		while(temp->next != NULL)
		{
			ptr=temp;
			temp= temp->next;
			
		}
		ptr->next=NULL;
		
		free(temp);
	}
	return end;
	
}
struct Linked_list* delete_at_between(struct Linked_list *begin)
{
	int no;
	struct Linked_list *temp= begin;
	struct Linked_list *ptr=NULL;
	printf("\nenter the data to be deteted");
	scanf("%d",&no);
	while(temp->data != no)
	{		
		ptr=temp;
		temp =temp->next;
	}
	ptr->next = temp->next;
	free(temp);
	
	return begin;
	
}
struct Linked_list* reverse_list(struct Linked_list *head)
{


    if (head == NULL)
    {
        printf ( "List is empty nothing to reverse. \n" );
    }
    else if (head->next == NULL)

    {

        printf ( "List has only one element. Nothing to reverse\n" );

    }

    else

    {

        struct Linked_list* current = head;

        struct Linked_list* one_step_forward = head->next;

        struct Linked_list* two_step_forward = head->next->next;



        current->next = NULL;

        one_step_forward->next = current;

        while(two_step_forward != NULL)

        {

            current = one_step_forward;

            one_step_forward = two_step_forward;

            two_step_forward= two_step_forward->next;

            one_step_forward->next = current;

        }

        head = one_step_forward;
		display_Linked_list(head);
    }

    return head;
}
