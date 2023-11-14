// to count the number of variables in a string without strings function .
#include<stdio.h>
#include<strings.h>
main()
{
	char s1[40]="SUBHA UTHKE HAMNE PIYA PANNI";
	int i=0;
	
	while(s1[i]!='\0')
	{
		i++;
	}
	printf("%d",i);
}
