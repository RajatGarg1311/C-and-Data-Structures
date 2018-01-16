
#ifndef Linked_list_H
#define Linked_list_H
#include<stdio.h>
#define SIZE 5

//decleare a structure for link list
extern int que_size;
struct Queue
{
	int data;
	int *front;	
}; 

#endif

int IsFull(struct Queue *);
int IsEmpty(struct Queue *);
void enque(struct Queue *,int);
int deque(struct Queue *);
void Peek(struct Queue *);

