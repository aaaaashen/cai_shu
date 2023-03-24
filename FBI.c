#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int a=rand();
    int b;
    int c;
    a=a%100;
    for(int i=0;i<10;i++)
    {
        c=10-i;
    printf("请尝试在%d次内猜一个两位数\n",c);
    scanf("%d",&b);
    if(b>a)
    {
        printf("猜大了\n");
        continue;
    } 
    else if(b<a)
    {
        printf("猜小了\n");
        continue;
    }
    else //if(b==a)
    {
        printf("猜对辣！\n");
        break;
    }
    }
return 0;
}