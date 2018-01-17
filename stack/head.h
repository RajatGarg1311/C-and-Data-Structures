
#ifndef Linked_list_H
#define Linked_list_H
#include<stdio.h>
#define SIZE 5

//decleare a structure for link list

struct Stack
{
	int arr[SIZE];
	int top;
	
}s1; 

#endif

int IsFull(struct Stack *);
int IsEmpty(struct Stack *);
void Push(struct Stack *,int);
int Pop(struct Stack *);
void Peek(struct Stack *);

