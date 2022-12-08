#include<stdio.h>
int main()
{
	int a[15],*p;
	p=a;
	for(int i=0;i<10;i++)
	scanf("%d",(p+i));
	for(int i=0;i<10;i++)
	{
		if(i>=1) *(p+i)-=*(p+i-1);
	}
	for(int i=0;i<10;i++)
	printf("%d ",*(p+i));
	return 0;
}
