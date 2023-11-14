//concatination(adding to strings )
#include<stdio.h>
#include<string.h>
main()
{
	char str[40]="Phele hamne mara yeh wala, phir yeh wala";
	char str1[50]="phir hamne yeh marke krdiye khatam";
	
	//strcat(str,str1);
	strncat(str,str1,20);
	printf("%s\n",str);
}
