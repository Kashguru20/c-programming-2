#include<stdio.h>
struct student
{
	int registration;
	struct result
	{
		int marks;
	}r1;
}s1;
main()
{
	s1.registration=1;
	s1.r1.marks=100;
	
	printf("%d\n",s1.registration);
	printf("%d",s1.r1.marks);
}
