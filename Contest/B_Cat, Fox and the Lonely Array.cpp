#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


/// Unfinished sCode


void Dev_Sol()
{
    int n;
    cin>>n;

    vector<int>a(n);

    //maze(n) cin>>a[i];

    cout<<(1^0)<<" "<<(0^2)<<endl;


}

void solve()
{
    int n; cin>>n;
    vector<int> a(n);
    int ors=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        ors |= a[i];
    }

    int ans=1;

    for(int i=0;i<30;i++)
    {
         int p=(ors&(1<<i));
         if(p==0) continue;

         int d=0;

         for(int j=0;j<n;j++)
         {
            int bit=(a[j]&(1<<i));
            if(bit){
               ans=max(ans,d+1);
               d=0;
            }
            else d++;
         }
         ans=max(ans,d+1);
    }
    cout<<ans<<'\n';
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

