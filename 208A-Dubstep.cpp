#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i+=2;
            continue;
        }
        else
        {
            cout<<s[i];
            if(i==s.size()-4&&s[s.size()-1]=='B')cout<<endl;
            else if(i==s.size()-1)cout<<endl;
            else if (s[i+1]=='W'&&s[i+2]=='U'&&s[i+3]=='B')cout<<" ";
        }
    }
}
