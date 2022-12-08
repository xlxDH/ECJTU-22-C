#include<stdio.h>
int main()
{
	int x =10,y=5,*px,*py;
	px=py;
	px=&x;
	py=&y;
	printf("*px=%d,*py=%d\n",*px,*py);
	return 0;//retum0ดํมห
}
