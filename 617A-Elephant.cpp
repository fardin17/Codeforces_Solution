#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin >> n;
    if(n>=5){if(n%5==0)count=n/5;else count=n/5+1;}
    else count=1;
    cout<<count <<endl;
}
