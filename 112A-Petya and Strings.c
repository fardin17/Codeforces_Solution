#include<stdio.h>
#include<string.h>
int main()
{
    int a=0;
    char str1[101],str2[101];
    scanf("%s",str1);
    scanf("%s",str2);
    a=strcmpi(str1,str2);
    printf("%d\n",a);
}
