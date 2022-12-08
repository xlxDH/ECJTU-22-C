#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%400==0) printf("闰年");
	else {
		if(a%4==0&&a&100!=0) printf("闰年");
		else printf("不是闰年");
	}
	return 0;
}
