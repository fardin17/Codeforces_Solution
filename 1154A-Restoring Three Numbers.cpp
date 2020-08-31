#include <bits/stdc++.h>
#define pb(a)           push_back(a)
#define ll              long long int
#define scd(a)          scanf("%d",&a)
#define mp(a,b)         make_pair(a,b)
#define scl(w)          scanf("%I64d",&w)
#define scdd(a,b)       scanf("%d %d",&a,&b)
#define srt(a)          sort(a.begin(),a.end())
#define rsrt(a)         sort(a.rbegin(),a.rend())
#define scll(a,b)       scanf("%I64d %I64d",&a,&b)
#define input(v,n)      for (ll i=0;i<n;i++){ll a;cin >> a;v.push_back(a);}
#define input2(v1,v2,n) for (ll i=0;i<n;i++){ll a,b;cin >> a>>b;v1.push_back(a);v2.pb(b);}
#define rep(a,n)        for(ll i=a;i<n;i++)
#define vll             vector<ll>

using namespace std;

int main()
{
ll a,x,y,z;
vll v;
for(int i=0;i<4;i++){
  cin>>a;

 v.pb(a);
}
sort(v.rbegin(),v.rend());
x=v[0]-v[1];
y=v[2]-x;
z=v[3]-x;
cout<<x<<" "<<y<<" "<<z<<endl;
return 0;

}
