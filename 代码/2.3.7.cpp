#include<stdio.h>
int main()
{
	int a ,b;
	float d , e ;
	char c1,c2;
	double f ,g;
	a = 61; b =62;
	c1 ='a';c2='b';
	f = 3157.890121;g=0.123456789;
	d = 3.56;e = -6.87;
	printf("a=%d,b=%d\nc1=%c,c2=%c\n",a,b,c1,c2);
	printf("f=%15.6f,g=%15.12f\nd=%6.2f,e=%6.2f\n",f,g,d,e);
	return 0;
}
