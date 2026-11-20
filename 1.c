#include <stdio.h>
int main()
{
    int a[10],i,j,min,temp;
    printf("输入10个整数：");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<9;i++)
    {
        min=i;
        for(j=i+1;j<10;j++)
            if(a[j]<a[min]) min=j;
        temp=a[i];a[i]=a[min];a[min]=temp;
    }
    printf("排序结果：");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}