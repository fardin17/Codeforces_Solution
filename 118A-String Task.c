#include<stdio.h>
#include<string.h>
int main()
{
   char s[100];
   scanf("%s",s);
   int l,i;
   l=strlen(s);
   for(i=0;i<l;i++)
   {
    if (s[i]<='Z'&& s[i]>='A')
       {
           s[i]=s[i]+32;
        }
    if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='y'&&s[i]!='u')
    {
      printf(".%c",s[i]);
    }

   }
   printf("\n");
return 0;
}
