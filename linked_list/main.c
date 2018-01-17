#include<stdio.h>
#include"head.h"


int main()
{
	char ch;
	int choice;
	struct Linked_list *hd=NULL;
	
	do
	{
		printf("\n************menu*************\n");
		printf("\n 1. display linkled list\n");
		printf("\n 2. Add the node at begin of list\n");
		printf("\n 3. Add the node at End of list\n");
		printf("\n 4. Add the node at between of list\n");
		printf("\n 5. delete the node at begin of list\n");
		printf("\n 6. delete the node at End of list\n");
		printf("\n 7. delete the node at between of list\n");
		printf("\n 8. reverse of list\n");
		printf("\n enter your choice\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				display_Linked_list(hd);
			break;
			case 2:
				hd=add_at_begin(hd);
			break;
			case 3:
				hd=add_at_end(hd);
			break;
			case 4:
				hd=add_at_between(hd);
			break;
			case 5:
				hd=delete_at_begin(hd);
			break;
			case 6:
				hd=delete_at_end(hd);
			break;
			case 7:
				hd=delete_at_between(hd);
			break;
			case 8:
				hd=reverse_list(hd);
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
