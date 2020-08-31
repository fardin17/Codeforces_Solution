#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d;
    vector<int>v;
    set<int>s;
    cin>>k>>l>>m>>n>>d;
    v.push_back(k);
    v.push_back(l);
    v.push_back(m);
    v.push_back(n);
    sort(v.begin(),v.end());
    for(int i=0;i<4;i++)
    {
        for(int j=v[i];j<=d;j+=v[i])
        {
            s.insert(j);
        }
    }
    cout << s.size() << endl;

}
