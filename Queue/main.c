#include<stdio.h>
#include"head.h"


int main()
{
	char ch;
	int choice;
	int que_no,deq;
	struct Queue ;
	s1.top=-1;
	do
	{
		printf("\n************menu*************\n");
		printf("\n 1. Display Queue\n");
		printf("\n 2. Enque\n");
		printf("\n 3. Deque\n");
		printf("\n 4. Peek in Queue\n");
		printf("\n enter your choice\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
						
			break;
			case 2:
					if(!IsFull(&s1))
					{
						printf("\n Enqueue a number: ");
						scanf("%d",&enq_no);
						Push(&s1,push_no);
					
					}
					else
						printf("\nSTACK is full");
			break;
			case 3:
					poop = Pop(&s1);
					if(poop!=0)
						printf("\nNumber is Popped from Stack : %d",poop);

			break;
			case 4:
					Peek(&s1);
			break;
			default:
			break;
		}
		
		printf("\n Do you want to continue.. (Y/N)\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		
	}
	while(ch=='Y'||ch=='y');
	
	return 0;
	
}
