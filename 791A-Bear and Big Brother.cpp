#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,count=0;
   cin >> a >> b;
   while(1){
   if((a*3)<=(b*2)){
   count++;
   a*=3;b*=2;
   }
   else if((a*3)>(b*2)){
      count++;
      break;
   }
   else
      break;
   }cout << count << endl;
   return 0;
}
