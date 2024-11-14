#include <bits/stdc++.h>
#define ll long long
using namespace std;

void DNBD()
{
    int n;
    cin>>n;

    string s;
    cin>>s;
    bool f = true;

    map<char, int> m;

    for(int i=0; i<n; i++)
    {
        m[s[i]]++;

        if(m[s[i]]>1 && s[i-1] != s[i])
        {
            f = false;
            break;
        }
    }

    if(f)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        DNBD();
    }

    return 0;
}
