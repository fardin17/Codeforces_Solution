#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long n,s;
    cin >> n >>s;
    for(long long i=0;i<s;i++)
    {
    if (n%10!=0)n-=1;
    else if(n%10==0)n=n/10;}
    cout <<n<<endl;
    return 0;
}
