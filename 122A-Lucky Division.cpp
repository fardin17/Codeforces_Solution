#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0,lucky[10]={4,7,47,74,447,474,477,744,747,774};
    cin >> n;
    for(int i=0;i<10;i++){
        if(n%lucky[i]==0){
        cout << "YES" << endl;
        return 0;}
    }
        cout << "NO" << endl;
}
