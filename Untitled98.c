// pointers with structures 
#include<stdio.h>
struct emp
{
	char name[20];
	int age;
	float salary;
};
main()
{
	struct emp e1=("gurpreet",20,100000);
	struct emp *ptr;
	ptr=&e1;
	printf("The given info is :\n name: %s\n age: %d\n salary %f",e1.name ,e1.age,e1.salary);
	
    printf("The given info is :\n name: %s\n age: %d\n salary %f",ptr->.name ,ptr->age,ptr->salary);
		
	printf("The given info is :\n name: %s\n age: %d\n salary %f",(*ptr).name ,(*ptr).age,(*ptr).salary);
	
}
