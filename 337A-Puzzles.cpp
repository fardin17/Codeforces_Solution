#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,p,d,md=1000,temp=0,i;
    cin>>n>>t;
    vector<int>v;
    for(int j=0; j<t; j++)
    {
        cin>>p;
        v.push_back(p);
    }

    sort(v.begin(),v.end());
    for(i=0; i<=t-n; i++)
    {
        d=v[i+n-1]-v[i];
        md=min(md,d);
    }
    cout << md <<endl;

}
