#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
using lld = long double;
using namespace std;


bool check(vector<int> &v, int indx)
{
    vector<int>temp, a;

    maze(v.size())
    {
        if(i!=indx) temp.push_back(v[i]);
    }


    for(int i=0; i<temp.size()-1; i++)
    {
        a.push_back(__gcd(temp[i], temp[i+1]));
    }
    if(is_sorted(all(a))) return true;

    return false;
}


void Dev_Sol()
{
    int n;
    cin>>n;
    vector<int>v(n), res;

    maze(n) cin>>v[i];

    for(int i=0; i<n-1; i++)
    {
        int x = __gcd(v[i], v[i+1]);

       res.push_back(x);
    }

    if(is_sorted(all(res)))
    {
        py;
        return;
    }

    int indx=0;

    for(int i=0; i<n-1; i++)
    {
        if(res[i]>res[i+1])
        {
            indx=i;
            break;
        }
    }

    if(check(v, indx)) py;
    else if(check(v, indx+1)) py;
    else if(check(v, indx+2)) py;
    else pn;
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
