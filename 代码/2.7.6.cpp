#include<stdio.h>
int main()
{
	int a[100];
	for(int i=0;i<10;i++)
	scanf("%d",&a[i]);
	int t;
	for(int i=0;i<5;i++)
	{
		t = a[i];
		a[i] = a[9-i];
		a[9-i] = t;
	}
	for(int i=0;i<10;i++)
	printf("%d ",a[i]);
	return 0;
}
