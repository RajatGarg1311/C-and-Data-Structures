#include<stdio.h>
#include<malloc.h>
#include"structstudent.h"

struct Student * acceptdetails(struct Student *head)
{
	
	
	struct Student *p ;
	if(head==NULL)
		p=head;
	while(p->next!=NULL)
		p=p->next;
	
	p = (struct Student*) malloc(sizeof(struct Student));
	printf("\n Enter the Record");
	printf("\nEnter the rollno");
	scanf("%d",&p->rollno);
	printf("\nEnter the name");
	p->name=(char*) malloc(sizeof(char)*(10));
	scanf("%s",p->name);
	printf("\nEnter the per");
	scanf("%lf",&p->per);
	p->next = NULL;
	//p=head->next;
	return p;

}

void displaydetails(struct Student *head)
{
	struct Student *p=NULL ;
	printf("\n|rollno\t|Student's Name\t|Percentage\t|\n");
	p=head;
	
	while(p!=NULL)
	{
		printf("\n|%d\t|%s\t\t|%0.2lf\t\t|\n",p->rollno,p->name,p->per);
		p=p->next;
	}
	
}

/*void display1Details(struct Student *p,int *recTotal,int recOne)
{
		for(int i=0; i < *recTotal; i++) 
			if(recOne==(p+i)->rollno)
			{
				printf("\n|record Number\t|rollno\t|Student's Name\t|Percentage\t|\n");
				printf("\n|%d\t\t|%d\t|%s\t\t|%0.2lf\t\t|\n",i+1,(p+i)->rollno,(p+i)->name,(p+i)->per);
				break;
			}
		

}*/
/*void deleteDetails(struct Student *p,int *recOne,int *recTot)
{
	for(int i=0; i<recTotal; i++) 
			if(recOne==(p+i)->rollno)
			{
				(p+i)->rollno = (p+(i+1))->rollno;
		
				(p+i)->name = (p+(i+1))->name;
		
				(p+i)->per = (p+(i+1))->per;
			}
		
}*/

