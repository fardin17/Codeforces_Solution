#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t, n,a;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int flag=0;
        vector <int> v;
        while(n--)
        {
            cin >> a;
            v.push_back(a);
        }
        sort(v.rbegin(),v.rend());
        for (int i=0; i<v.size()-1; i++)
        {
            if(v[i]-v[i+1]>1)flag=1;
        }
        if (flag==1){cout << "NO" << "\n";v.clear();}
        else {cout << "YES" << "\n";v.clear();}

    }

}
