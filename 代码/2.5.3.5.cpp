#include<stdio.h>
int main()
{
	double sum=0;
	for(int i=1;i<=20;i++)
	{
		sum += 1.0/((i+1.0)*i);
	}
	printf("%.2lf",sum);
	return 0;
}
