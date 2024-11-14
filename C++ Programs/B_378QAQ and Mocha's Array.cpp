#include <bits/stdc++.h>
#define ll long long
#define fr(a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Dev_Sol()
{
    int n;
    cin>>n;

    vector<int>v(n);

    int r = 0;

    maze(n)
    {
        cin>>v[i];
        if(v[i]==1) r=1;
    }

    if(r) py;
    else
    {
        sort(all(v));
        vector<int>temp;

        fr(1, n)
            if(v[i]%v[0]) temp.push_back(v[i]);


        sort(all(temp));

        fr(1,temp.size())
        {
            if(temp[i]%temp[0]){
                pn;
                return;
            }
        }
        py;
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
