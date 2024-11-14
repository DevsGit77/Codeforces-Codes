#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solution()
{
    char ch;
    cin>>ch;

    bool flag = false;

    string s = "codeforces";

    for(int i=0; i<s.length(); i++)
    {
        if(ch == s[i])
        {
            flag = true;
            break;
        }
    }

    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solution();
    }

    return 0;
}

