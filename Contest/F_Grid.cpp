#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Joy_Sol()
{
    string s[22];

    for(int i=0; i<21; i++)
    {
        cin>>s[i];
    }


    int ans=0;

    for(int i=0; i<=17; i++)
    {
        for(int j=0; j<=17; j++)
        {
            int sum=0;

            for(int k=i; k<i+4; k++)
            {
                for(int l=j; l<j+4; l++)
                {
                    if(s[k][l] == '1') sum++;
                }
            }

            ans = max(sum, ans);
        }
    }

    cout<<ans<<endl;
}




int main()
{
    speed;

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
        Joy_Sol();
//    }

    return 0;
}
