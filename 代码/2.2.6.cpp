#include<stdio.h>
int main()
{
	double len , s , sur , r,v, pi =3.14159;
	scanf("%lf",&r);
	len = 2*pi*r;
	s = pi*r*r;
	sur = pi*4*r*r;
	v = pi*4/3*r*r*r;
	printf("周长：%.2lf，面积：%.2lf，表面积：%.2lf，体积：%.2lf",len,s,sur,v);
	return 0;
}
