#include<stdio.h>
int main()
{
    int a[50],b,n,i,m,counter = 0;
    scanf("%d%d",&n,&b);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if ( i == b)
        m = a[i];

    }

    for(i=1;i<=n;i++){
        if(a[i] >= m && a[i] != 0){
          counter ++;
        }
        }
    printf("%d\n",counter);



    return 0;
}
