//creating a structure with implementing the array 
#include<stdio.h>
struct emp
{
	char name[20];
	int age;
	float salary;
};

main()
{
	int i;
	struct emp e[100];//e2,e3,e4,e5,......,e100
	//e1[1].age=21;e2[2].age=22;
	
	for(i=0;i<2;i++)
	{	
	printf("Enter the Name, Age and Salary\n");
	gets(e[i].name);
	fflush(stdin);
	scanf("%d",&e[i].age);
	fflush(stdin);
	scanf("%f",&e[i].salary);
	fflush(stdin);
}
for(i=0;i<2;i++)
{
	printf("name is:%s \n",e[i].name);
	printf("age is:%d \n",e[i].age);
	printf("salary is: %f \n",e[i].salary);
}
}
