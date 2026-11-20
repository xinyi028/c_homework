#include <stdio.h>
int main()
{
    char ch;
    while((ch=getchar())!='#')
    {
        if(ch>='A'&&ch<='Z')
            ch=ch+32;
        else if(ch>='a'&&ch<='z')
            ch=ch-32;
        putchar(ch);
    }
    return 0;
}