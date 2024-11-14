#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define rf(i,a,n) for (int i=n-1; i>=0; i--)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Dev_Sol()
{
    int n;
    cin>>n;

    vector<int>v(n);

    int c0=0, cz=0;

    fr(i, 0, n)
    {
        cin>>v[i];

        if(v[i]==0) c0++;
    }

    if(c0 == 0)
    {
        if(n==1) cout<<"0"<<endl;
        else cout<<n-1<<endl;
        return;
    }

    int rem = n-c0;
    int tem = INT_MIN;

    fr(i, 0, n)
    {
        if(v[i] == 0) cz++;
        else if(cz>0 && v[i] == 1) cz--;

        tem = max(tem, cz);
    }

    cout<<tem + rem<<endl;

}


int main()
{
    speed;

    Dev_Sol();

    return 0;
}
