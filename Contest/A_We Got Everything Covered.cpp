#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Covered()
{
    int n, k;
    cin>>n>>k;

    string s = "";

    char ch = 'a';

    while (n--)
    {
        for(int i=0; i<k; i++)
        {
            s += ch+i ;
        }
    }

    cout<<s<<endl;


}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Covered();
    }

    return 0;
}
