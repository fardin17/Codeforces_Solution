#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s,temp;
   int flag=0;
   cin >> s;
   temp = s;
   if(s.size()==1)
   {
       flag=1;
   }
   for(int i=1;i<s.size();i++){
    if(s[i]<=91){
    s[i]+=32;
    flag=1;
    }
    else {
        flag=0;
        break;}
   }
   if(flag==1)
   {
     if(s[0]>=97)s[0]-=32;
     else
        s[0]+=32;
   cout << s <<endl;
   }
   else
    cout << temp << endl;
}
