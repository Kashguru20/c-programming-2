// union (size of)
#include<stdio.h>
struct student
{
	char name[20];
	int registration;
	float marks;
}s1;
main()
{
	s1.registration=1;
	
	printf("%d\n",s1.registration);
	printf("%f\n",sizeof(s1.marks));
}
