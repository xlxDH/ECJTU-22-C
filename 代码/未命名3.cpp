#include<stdio.h>
int main()
{
    //1.所有三位数字（100~999）
    int num = 100;
    do
    {
        //2.获取所有水仙花数
        int a = num % 10;        //个位
        int b = num / 10  %10;   //十位
        int c = num / 100 %10;   //百位

        if(a*a*a + b*b*b + c*c*c == num )
        {
            printf("%d\n",num);
        }
        num++;
    }while(num< 1000);
    return 0;
}

