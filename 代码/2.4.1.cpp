#include<stdio.h>
int main()
{
	int ch;
	scanf("%c",&ch);
	if(ch<='9'&&ch>='1') printf("Êý");
	else if(ch<='z'&&ch>='a') printf("×ÖÄ¸");
	return 0;
}
