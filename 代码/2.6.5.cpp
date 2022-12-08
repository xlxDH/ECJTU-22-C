#include<stdio.h>
int fun(int n)
{
	bool a = false;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0) {
		a=true;
		break;
		}
	}
	if(a) return 0;
	else return 1;
}
int main()
{
	int m,flag;
	printf("input an interger:");
	scanf("%d",&m);
	flag=fun(m);
	if(flag==1)
	printf("%d is a prime.\n",m);
	else
	printf("%d is not a prime\n",m);
	return 0;
}
