#include<stdio.h>
const int N =0x3f;
int a[N][N];
int main()
{
	int m ,sum=0;
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	for(int j=0;j<m;j++)
	{
	scanf("%d",&a[i][j]);
	if(i==j||i+j==m-1) sum +=a[i][j];
	}
	printf("%d\n",sum);
	return 0;
}
