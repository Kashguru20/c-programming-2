#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int id;
	int age;
	
};
struct student show(struct student s);
main()
{
	struct student s1={1,21};
	struct student s1
	show(s1);
};

void show(struct student s)
{
	printf("id is %d\n",s.id);
	printf("age is %d",s.age);
}


