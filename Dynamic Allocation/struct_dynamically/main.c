#include<stdio.h>

#include"structstudent.h"


int main()
{
	struct Student *sptr, *tail;
	sptr=tail;
	int recTot=0, recOne=0;
	int choice;
	char ch;
	
	do
	{
		printf("\n***************************************************");
		printf("\n 1. Add Record\n 2. Display a Record\n 3. Show Whole Record");
		printf("\n***************************************************");
		printf("\n Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n How many student records do u want:	");
				scanf("%d",&recTot);
				tail=acceptdetails(sptr);
				sptr = tail;
				for(int i=1 ;i<recTot ;i++)
				{
						tail=acceptdetails(tail);
						tail->next=tail;
				}
				printf("\nStudent records %d Added Successfully!!",recTot);
				
			break;
			/*case 2:
				printf("\n Enter a student's Roll to Display:	");
				scanf("%d",&recOne);
				display1Details(sptr,&recTot,recOne);
				printf("\nStudent records %d Displayed Successfully!!",recOne);
			break;*/
			/*case 3:
				printf("\n Enter a student's Roll to Delete:	");
				scanf("%d",&recOne);
				deleteDetails(sptr,&recOne,&recTot);
				printf("\nStudent records %d Deleted Successfully!!",recOne);
				printf("\nStudent Total records %d Left!!",recTot);
			break;*/
			case 3:
				//displaydetails(sptr,recTot);
				displaydetails(sptr);
				printf("\nStudent records %d Displayed Successfully!!",recTot);
			break;
			default:
				printf("\n construction work is in progress.. ");
		}
		printf("\n Do you want to continue .....(Y/N)");
		scanf("%c",&ch);
		scanf("%c",&ch);
	}while(ch=='Y'||ch=='y');
		
	return 0;
}
