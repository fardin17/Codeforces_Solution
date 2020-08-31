#include<bits/stdc++.h>
#define ll long long
#define ull long long
#define vll vector<ll>
#define pb push_back
using namespace std;
ll sum(ll n)
{
    ll ans=0;
    while(n) ans+=n%10,n/=10;
    return ans;
}
   int main()
{
    int d,s;
    vll v;
    vll v1;
    cin>>d>>s;
    if(d==1&&s==0){cout<<"0"<<" 0"<<endl;return 0;}
    if(d*9<s||s==0){cout<<"-1"<<" -1"<<endl;return 0;}
    if(s<=9&&d>=2)
    {
        cout<<"1";
        for(int i=0;i<d-2;i++)
        {
            cout<<"0";
        }cout<<s-1;
        cout<<" ";
        cout<<s;
        for(int i=0;i<d-1;i++)
        {
            cout<<"0";
        }
        return 0;
    }
    else
    {for(int i=d;i>=0;i--){
        for(int j=9;j>=0;j--)
    {
        if(s<=9&&d>=2)
    {
        v.pb(s);s--;
        v1.pb(s);
        for(int i=0;i<d-2;i++)
        {
            v.pb(0),v1.pb(0);
        }v.pb(0),v1.pb(1);
        d=0;
        break;
    }
      else if(s>=j){v.pb(j),v1.pb(j),s-=j,d--;break;}
    }
      if(d==0)break;
    }
    sort(v1.begin(),v1.end());
    if(v1[0]==0){
    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]!=0){swap(v1[0],v1[i]);break;}

    }
    }
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i];
    }cout<<" ";
     sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }

    cout<<endl;
    return 0;

}
}
