#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,sum=0;
    vector<int> v;
    cin>>a >>b >>c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    if((v[0]==1)&&(v[2]==1)){sum=v[0]+v[1]+v[2];}
    else if(v[0]==1){sum=(v[0]+v[1])*v[2];}
    else if(v[2]==1){sum=v[0]*(v[1]+v[2]);}
    else if(v[1]==1){if(v[0]<=v[2])sum=(v[0]+v[1])*v[2];else sum=v[0]*(v[1]+v[2]); }
    else
        sum=v[0]*v[1]*v[2];
    cout << sum <<endl;
}
