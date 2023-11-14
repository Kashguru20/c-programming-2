#include<stdio.h>
#include<strings.h>
main()
{
	char s1[40]="LOL";
	char s2;
	int i,j=strlen(s1)-1;
	while(i<j)
	{
		s2=s1[i];
		s1[i]=s1[j];
		s1[j]=s2;
		
		i++;
		j--;
	}
	printf("The reversed string is:%s",s1);
	
}
