#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, a=0,d=0;
    string s;
    cin>>n;
    cin>> s;
    map <char,int> m;
    map <char,int> :: iterator it;
    for (int i=0; i<s.size(); i++)
    {
       m[s[i]]++;
    }
    for (it=m.begin(); it!=m.end(); it++){
        if (it->first == 'A')a = it -> second;
        else if (it->first == 'D')d = it -> second;
    }
    if(a > d)cout<<"Anton"<<endl;
    else if(a < d)cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
}
