#include<bits/stdc++.h>
#define ll         long long int
#define ff         first
#define ss         second
#define pb         push_back
#define vi         vector <int>
#define fi(i,a,b)  for(int i=a;i<b;i++)
#define srt(v)     sort(v.begin(),v.end())
#define rsrt(v)    sort(v.rbegin(),v.rend())
#define max(v)     *max_element(v.begin(),v.end())
#define min(v)     *min_element(v.begin(),v.end())
#define mkp(a,b)   make_pair(a,b)
#define scf2(a,b)  scanf("%lld%lld",&a,&b)
#define scf(a)     scanf("%lld",&a)
#define pf(a)      printf("%lld\n",a)
#define maxn       100005
using namespace std;
int main()
{
  ll n, h, a, ans=0;
  cin >> n >> h;
  fi (i , 0, n)
  {
      cin >> a;
      if( a> h)ans++;
  }
  cout << ans+n << endl;
  return 0;
}
