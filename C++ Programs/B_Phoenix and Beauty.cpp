#include <bits/stdc++.h>
#define ll long long
#define fl(a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define acm(v, x) accumulate(v.begin(), v.end(), x)
#define cnt(v, x) count(v.begin(), v.end(), x)
#define sm [](int x, int y) {return x+y;}
using lld = long double;
using namespace std;


void Dev_Sol()
{
    int n, k;
    cin>>n>>k;

    set<int>st;

    maze(n)
    {
        int e;
        cin>>e;

        st.insert(e);
    }

    int sz = st.size();

    if(k<sz) cout<<-1<<endl;
    else{
        cout<<n*k<<endl;

        maze(n)
        {
            for(auto e : st) cout<<e<<" ";
            for(int j=0; j<k-sz; j++){
                cout<<1<<" ";
            }
        }
        cout<<endl;
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

