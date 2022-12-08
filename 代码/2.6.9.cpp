#include<stdio.h>
int fac(int n)
{
	int sum =1;
	for(int i=2;i<=n;i++)
	sum *=i;
	return sum;
}
int main()
{
	int n,s;
	scanf("%d",&n);
	s=fac(n);
	printf("%d\n",s);
	return 0;
}
