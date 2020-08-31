#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll t,n;
  cin >> t;
  while(t--){
    vector <ll> v;
    ll evsum=0,od=-1,odsum=0;
    cin >> n;
    if (n%4!=0)cout << "NO"<<endl;
    else
        {
            for (int i=1; i<n; i++)
            {
               if (i<=n/2) {
                    v.push_back(i*2);
                    evsum+=v[i-1];
               }
               else
               {
                    od+=2;
                    v.push_back(od);
                    odsum+=od;
               }

            }

            cout << "YES"<< "\n";
            for (int i=0; i<v.size(); i++)
                cout << v[i] << " ";
                cout << evsum-odsum <<"\n";

        }
  }

}
