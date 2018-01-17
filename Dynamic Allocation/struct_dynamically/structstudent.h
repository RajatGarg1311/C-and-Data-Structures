#ifndef structstudent_H
#define structstudent_H

 
struct Student
{
	int rollno;
	char* name;
	double per;
	struct Student *next;
};

struct Student * acceptdetails(struct Student *);
void displaydetails(struct Student *);
//void display1Details(struct Student *,int *,int );
//void deleteDetails(struct Student *,int *,int );

#endif
