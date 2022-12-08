#include<stdio.h>
int main()
{
	int a=5,b=4,c=3,d=0,e,f,g;
	e = a> b > c;
	f=a&&b||c;
	g = c&&d&&a++;
	printf("a=%d,e=%d,f=%d,g=%d",a,e,f,g);
	return 0;
}
