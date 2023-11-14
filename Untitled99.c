#include<stdio.h>
struct student 
{
	int registration;
	char marks[5];
	
} s1;
main()
{
	int i;
	s1.registration=1;
	printf("Enter the marks of the student:");
	for(i=0;i<5;i++)
	{
		scanf("%d\n",&s1.marks[i]);
		
	}
	printf("%d",s1.marks[i]);
	printf("the marks are");
	for(i=0;i<5;i++)
	{
		printf("%d\n",s1.marks[i]);
    }
}
