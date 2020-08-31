#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d;
    cin >> n;

    for(int i=n+1;i<=10000;i++){
    a=i%10;
    b=(i/10)%10;
    c=((i/10)/10)%10;
    d=(((i/10)/10)/10)%10;
    if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){cout <<i<<endl;return 0;}
    }
}
