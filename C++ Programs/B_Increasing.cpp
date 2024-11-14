#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;



void Joy_Sol()
{
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());

    for(int i=1; i<n; i++)
    {
        if(v[i-1]==v[i])
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Joy_Sol();
    }

    return 0;
}
