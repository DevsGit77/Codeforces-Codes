#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Thorns()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int r = 0, cnt = 0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='.')
            continue;
        else if(s[i]== '*' && s[i+1] == '*')
            break;
        else if(s[i]=='@')
            cnt++;
    }

    cout<<cnt<<endl;

}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Thorns();
    }

    return 0;
}
