#include <stdio.h>
int main()
{
    char str[100],ch;
    int i,j,k,len=0;
    while((ch=getchar())!='#')
    {
        str[len++]=ch;
    }
    str[len]='\0';

    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            {
                for(k=j;k<len;k++)
                    str[k]=str[k+1];
                len--;j--;
            }
        }
    }
    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-1-i;j++)
        {
            if(str[j]>str[j+1])
            {
                char t=str[j];
                str[j]=str[j+1];
                str[j+1]=t;
            }
        }
    }
    printf("%s",str);
    return 0;
}