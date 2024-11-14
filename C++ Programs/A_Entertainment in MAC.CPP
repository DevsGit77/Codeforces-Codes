#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Mac()
{
    int n;
    cin>>n;

    string s, rs;
    cin>>s;

    rs = "";

    int l = s.size();

    for(int i=l-1; i>=0; i--)
    {
        rs += s[i];
    }

    if(s <= rs)
        cout<<s<<endl;
    else
        cout<<rs<<s<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Mac();
    }

    return 0;
}
