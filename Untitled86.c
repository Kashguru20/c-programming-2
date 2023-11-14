#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr,i,n1,n2;
	n1=5;
	ptr=(int*)malloc(n1*(sizeof(int)));
	
	for(i=0;i<n1;i++)
	{
		printf("\nthe address of the allocated memory %d\n",ptr+i);
	 } 
n2=10; // new size for adding elements
ptr=realloc(ptr,n2*sizeof(int));
     
	 for(i=0;i<n2;i++)
	{
		printf("\nthe adress of the reallocated memory is %d\n",ptr+i);
	}
	 free(ptr);
}
