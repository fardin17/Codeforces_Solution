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
    int n,a,ma=0,mi=0,ans=0;
    cin >> n;
    vi v;
    fi (i,0,n)
    {
        if(i>0)
        {
            ma=max(v);
            mi=min(v);
        }
        cin >> a;
        v.pb(a);
        if((a > ma || a <mi) && i>0)ans++;
    }
    cout <<ans <<"\n";
}
