#include <stdio.h>
int main()
{
    char s1[100],s2[100];
    int n,i=0,j=0;
    printf("s1:");scanf("%s",s1);
    printf("s2:");scanf("%s",s2);
    printf("n:");scanf("%d",&n);
    while(s1[i]!='\0') i++;
    while(s2[j]!='\0' && j<n)
    {
        s1[i++]=s2[j++];
    }
    s1[i]='\0';
    printf("结果：%s",s1);
    return 0;
}