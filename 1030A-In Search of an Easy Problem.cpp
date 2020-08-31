#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,p,flag=0;
  cin >> n;
  for(int i=0; i<n;i++){
       cin >> p;
       if(p==1)flag=1;
       }
  if(flag==1) cout<<"Hard"<<endl;
  else cout<< "Easy" << endl;
}
