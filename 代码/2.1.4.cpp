#include<stdio.h>
int main()
{
	float h,w,s;
	printf("Please input two number(h,w):\n");
	scanf("%f,%f",&h,&w);
	s = h*w;
	printf("s=%.2fu",s);
	return 0;
}
