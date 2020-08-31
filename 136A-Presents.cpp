#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,k;
    cin>> t;
    vector<int>v;
    for(int j=0; j<t; j++)
    {
        cin>> a;
        v.push_back(a);
    }
    for(int i=1; i<=t; i++)
    {
        for(k=0; k<t; k++)
        {
            if(i==v[k])
                cout<<k+1;
        }
        if(i==t)
            cout<<endl;
        else
            cout<< " ";
    }
}
