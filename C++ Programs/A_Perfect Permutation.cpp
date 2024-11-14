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

    vector<int>v(n+1);

    if(n%2==1)
        cout<<-1<<endl;
    else
    {
        for(int i=1; i<=n; i+=2)
        {
            v[i]=i+1;
            v[i+1]=i;
        }

        for(int i=1; i<=n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    speed;

    Dev_Sol();

    return 0;
}

