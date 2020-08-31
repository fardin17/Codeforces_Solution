#include<stdio.h>
int main()
{
   long long int n,m,a,x,y,r;
   scanf("%lld%lld%lld",&n,&m,&a);
   x=n/a;
   y=m/a;
   if(n%a==0&&m%a==0){
   r= x*y;
   printf("%lld\n",r);
   }
   else if(n%a==0&&m%a!=0){
    r=x*(y+1);
    printf("%lld\n",r);
   }
   else if(n%a!=0&&m%a==0){
    r=y*(x+1);
    printf("%lld\n",r);
   }
   else{
    r=(y+1)*(x+1);
    printf("%lld\n",r);
   }
   return 0;
}
