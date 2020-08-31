#include <stdio.h>
#include <string.h>
int main()
{
    int i,c=0,c1=0,flag=0;
    char s[100];
    scanf("%s",s);
    for(i=0;i<=strlen(s)-1;i++)
    {
        if(s[i]=='0')
        {
            c++;
            c1=0;
        }
        else if(s[i]=='1')
        {
            c1++;
            c=0;
        }
        if(c==7 || c1==7)
            flag=1;
    }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");

}
