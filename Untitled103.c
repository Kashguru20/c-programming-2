#include<stdio.h>
#include<string.h>
union data
{
	int i;
	float f;
	char str[30];
	
};
main()
{
  union data d;
  strcpy(d.str,"gurpreet singh");
  printf("\n%s",d.str);
  
  d.i=90;
  printf("\n%d",d.i);
  
   d.f=9.99;
  printf("\n%f",d.f);
}
