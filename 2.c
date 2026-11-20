#include <stdio.h>
int main()
{
    int a[6]={1,3,5,7,9};
    int x,i,pos=5;
    printf("输入要插入整数x：");
    scanf("%d",&x);
    for(i=0;i<5;i++)
    {
        if(x<a[i])
        {
            pos=i;break;
        }
    }
    for(i=5;i>pos;i--)
        a[i]=a[i-1];
    a[pos]=x;
    printf("插入后：");
    for(i=0;i<6;i++)
        printf("%d ",a[i]);
    return 0;
}
