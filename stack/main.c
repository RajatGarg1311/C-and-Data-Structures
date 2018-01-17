#include<stdio.h>
#include"head.h"


int main()
{
	char ch;
	int choice;
	int push_no,poop;
	struct Stack s1;
	s1.top=-1;
	do
	{
		printf("\n************menu*************\n");
		printf("\n 1. Push in Stack\n");
		printf("\n 2. Pop from Stack\n");
		printf("\n 3. Peek in Stack\n");
		printf("\n enter your choice\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
					if(!IsFull(&s1))
					{
						printf("\n Push a number in Stack : ");
						scanf("%d",&push_no);
						Push(&s1,push_no);
					
					}
					else
						printf("\nSTACK is full");
			break;
			case 2:
					poop = Pop(&s1);
					if(poop!=0)
						printf("\nNumber is Popped from Stack : %d",poop);

			break;
			case 3:
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
