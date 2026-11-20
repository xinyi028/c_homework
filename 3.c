#include <stdio.h>
int main()
{
    int n,i=0;
    int bin[32];
    printf("输入十进制整数：");
    scanf("%d",&n);
    if(n==0) {printf("0");return 0;}
    while(n>0)
    {
        bin[i++]=n%2;
        n=n/2;
    }
    printf("二进制：");
    for(i--;i>=0;i--)
        printf("%d",bin[i]);
    return 0;
}