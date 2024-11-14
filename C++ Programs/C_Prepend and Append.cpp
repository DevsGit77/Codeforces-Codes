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
    int n;
    cin>>n;

    string s;
    cin>>s;

    int cnt=n, j=n-1;


    if(s[0]==s[n-1])
        cout<<n<<endl;
    else
    {
        for(int i=0; i<n/2; i++)
        {
            if(s[i] != s[j]) cnt -= 2;
            else break;
            j--;
        }
        cout<<cnt<<endl;
    }

}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Dev_Sol();
    }

    return 0;
}

