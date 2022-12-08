#include<stdio.h>
int main()
{
	int a[10],*p;
	p=a;
	for(int i=0;i<3;i++)
	scanf("%d",p+i);
	for(int i=0;i<3;i++)
	{
		int t;
		for(int j=i;j<3;j++)
		if(a[i]>a[j])
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	for(int i=0;i<3;i++)
	printf("%d ",*(p+i));
	return 0;
}
