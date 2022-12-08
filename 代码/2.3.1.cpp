#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int x , y ,c;
	x = a/100;
	c = a%10;
	y = a/10 -x*10;
	int sum = c*100+y*10+x;
	printf("y=%d",sum);
	return 0;
}
