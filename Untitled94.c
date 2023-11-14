				//creatin a structure
#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollno;
	float cgpa;	
}
main()
{
	struct student s1;
	strcpy(s1.name,"GURPREET SINGH");
	s1.rollno=37;
	s1.cgpa=8.2;

printf("name:%s\n rollnp.:%d \ncgpa%f",s1.name,s1.rollno,s1.cgpa);	
}

