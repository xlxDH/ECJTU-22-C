#include<stdio.h>
#include<string.h>
#define N 80
int fun(char *str)
{
	bool flag = true;
	int len=sizeof(*str)-1;
	for(int i=0;i<len;i++)
		if(*(str+i)!=*(str+len-i))
		{
			flag = false;
		}
		if(flag) return 1;
		else return 0;
}
int main()
{
	char s[N];
	printf("Enter a string:");
	gets(s);

	printf("\n\n");
	puts(s);
	if(fun(s))printf("YES\n");
	else printf("NO\n");
	return 0;
}
