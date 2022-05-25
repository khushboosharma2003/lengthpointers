#include<stdio.h>
int fun(char* k)
{
	int i;
	for(i=0;*(k+i)!='\0'   ; i++)
	k+i;
	return i ;
}
int main()
{
	char a[20];
	int l ;
	scanf("%s",a);
	l=fun(a);
	printf("length = %d",l);
}
