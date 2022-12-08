#include<stdio.h>
int main()
{
	double u , d ,h , s;
	scanf("%lf%lf%lf",&u,&d,&h);
	s = (u+d)*h/2;
	printf("s=%.2lf",s);
	return 0;
}
