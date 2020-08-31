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
  ll t, n , k , a, b;
  cin >> t;
  while (t--)
  {
      int ans = 0;
      vi v1, v2;
      cin >> n >> k;
      fi (i, 0, n)
      {
          cin >> a;
          v1.pb(a);
      }
      fi (i, 0, n)
      {
          cin >> b;
          v2.pb(b);
      }
      srt(v1);
      rsrt(v2);
      fi (i, 0, n)
      {
             if(v2[0]>v1[i] && k>0)
             {
                 swap(v2[0],v1[i]);
                 k--;
                 rsrt(v2);
             }
             else break;

      }
      fi (i, 0, n)
      {
          ans+=v1[i];
      }
      cout<<ans <<endl;
  }
  return 0;
}
