#include<bits/stdc++.h>
using namespace std;
int main()
{
   int s,n,a=0,b=0,c=0,count=0;
   cin >> n;
   while(n--){

      cin >> s;
     if(s==4){
      count++;
     }
     else if(s==3){
      c++;
     }
     else if(s==1)
     {
        a++;
     }
      else if(s==2)
      {
         b++;
      }


}
   if(a<=c){
         if((b%2)!=0){
      count=count+c+(b/2)+1;
            }
      else{
         count=count+c+(b/2);
         }
   }
   else if(c<a){

      if((((a-c)+(b*2))%4)!=0)
            count=count+c+(((a-c)+(b*2))/4)+1;
            else
               count=count+c+(((a-c)+(b*2))/4);

   }
   cout <<  count << endl;
   return 0;
}
