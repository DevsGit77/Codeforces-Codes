#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define rf(i,n) for (int i=n; i>=0; i--)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Joy_Sol()
{
    int n;
    cin>>n;

    vector<int>v(n), tv(n);

    fr(i,0,n)
    {
        cin>>v[i];
        tv[i]=v[i];
    }

    sort(all(tv));

    if(is_sorted(all(v)))
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else
    {
        int fi=-1, li=-1;

        fr(i, 0, n)
        {
            if(tv[i] != v[i])
            {
                if(fi == -1)
                {
                    fi=i;
                }
                li = i+1;
            }
        }

        reverse(v.begin()+fi, v.begin()+li);

        if(is_sorted(all(v)))
        {
            cout<<"yes"<<endl;
            cout<<fi+1<<" "<<li<<endl;
        }
        else
            cout<<"no"<<endl;

    }

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
