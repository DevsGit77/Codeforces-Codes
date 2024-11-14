#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Dev_Sol()
{
    string str;
    cin>>str;

    int count = 0, len = str.length();

    fr(i,0,len)
    {
        fr(j, i+1, len)
        {
            fr(m, j+1, len)
            {
                if(str[i]=='Q' && str[j]=='A' && str[m]=='Q')
                {
                    count++;
                }
            }
        }
    }

    cout<<count<<endl;
}


int main()
{
    speed;

    Dev_Sol();

    return 0;
}

