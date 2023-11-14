#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union data
{
	int i;
	float f;
	char str[20];
	
};
struct meta
{
	int i;
	float f;
	char str[30];
	
};

main()
{
  union data d;
  struct meta m;
  
 printf(" The size of the union is:%d",sizeof(d));
  printf(" \nThe size of the structure is:%d",sizeof(m));
  
 
}
