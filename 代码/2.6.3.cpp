#include<stdio.h>
int pow(int n,int m)
{
	int sum =1;
	while(m--)
	{
		sum *= n;
	}
	return sum;
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int s=pow(n,m);
	printf("%d\n",s);
	return 0;
}
