#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,count=0;
    cin>> n;
    while(n--)
    {
        cin>>a>>b;
        if(a<=(b-2)){
            count++;
        }
    }
    cout << count << endl;
}
