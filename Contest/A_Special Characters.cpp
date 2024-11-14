#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void SPC()
{
    int n;
    cin>>n;

    char ch = 'A';

    if(n%2==0)
    {
        cout<<"YES"<<endl;
        int l=n/2;
        while(l--)
        {
            cout<<ch<<ch;
            ch++;
        }
        cout<<endl;
    }
    else
        cout<<"NO"<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        SPC();
    }

    return 0;
}
