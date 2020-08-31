#include<stdio.h>
int main()
{
    int n,a,count=0;
    char s[5];
    scanf("%d",&n);
    while(n--)
    {
       scanf("%s",s);
       if(s[1]=='+')
       {
           count++;
       }
       else if(s[1]=='-')
       {
           count--;
       }
    }
    printf("%d\n",count);

    return 0;
}
