#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Make_It_white()
{
    int n, li, fi;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0; i<n; i++)
    {
        if(s[i] == 'B')
        {
            fi = i;
            break;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'B')
        {
            li = i;
        }
    }

    cout<< (li-fi)+1 <<endl;


}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Make_It_white();
    }

    return 0;
}
