#include<stdio.h>
int n =1;//这里的n是全局变量，在整个过程中都存在。
void func()
{
	static int a =2;//这里的a是只在函数中使用的a与主函数中的a不同，但函数中的a会储存着a的数值
	int b =5;//这里的b是只在函数中使用的b与主函数中的b不同,不会储存b的数值
	a+=2;
	b+=5;
	n+=12;
	printf("a=%d,b=%d,n=%d\n",a,b,n);
}
int main()
{
	int a =0,b=-10;
	printf("a=%d,b=%d,n=%d\n",a,b,n);
	func();
	printf("a=%d,b=%d,n=%d\n",a,b,n);
	func();
	return 0;
}
