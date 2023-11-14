#include<stdio.h>
#include<strings.h>
main()
{
	char s1[40]="SUBHA UTHKE HAMNE PIYA PANNI";
	int i;
	char s2[40]="PHIR HUMNE MARRA YEH WALA";
	
	strcpy(s1,s2);
    i=strlen(s1);
    printf("%s",s2);
    printf("\n%d",i);
	printf("\n%s",strrev(s1));
	printf("\n%s",strupr(s2));
	printf("\n%s",strlwr(s1));
	
	
	
}
