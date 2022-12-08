#include<stdio.h>
int main()
{
    int num = 100;
    do
    {
        
        int a = num % 10;        
        int b = num / 10  %10;   
        int c = num / 100 %10;   

        if(a*a*a + b*b*b + c*c*c == num )
        {
            printf("%d\n",num);
        }
        num++;
    }while(num< 1000);
    return 0;
}
