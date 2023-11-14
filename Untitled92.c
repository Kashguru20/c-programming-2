#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char c[100];
	int i=0;
	printf("Enter the String\n");
	gets(c); 
	
	for(i=0;c[i]='\0';i++)
	{
		i++;
	}
	printf("Length of thr string is:%d",i);
}
