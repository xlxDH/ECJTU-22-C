#include<stdio.h>
int fact(int n)
{
	int sum=1;
	for(int i=1;i<=n;i++) sum*=i;
	return sum;
}
int main()
{
	printf("%d\n",fact(5)+fact(8));
	return 0;
}
