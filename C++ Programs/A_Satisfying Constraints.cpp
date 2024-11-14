#include <bits/stdc++.h>
#define ll long long
using namespace std;

void constrains()
{
    int n, mxm = -1, mnm = 1e9, res;
    cin>>n;

    vector<int>v;


    while(n--)
    {
        int a, x;
        cin>>a>>x;

        if(a==1)
            mxm = max(mxm, x);
        else if(a==2)
            mnm = min(mnm, x);
        else
            v.push_back(x);
    }
    //cout<<mxm<<" "<<mnm<<endl;
    sort(v.begin(), v.end());

    res = max(0, mnm-mxm+1);

    //cout<<res<<endl;

    for(auto i:v)
    {
        if(i>=mxm && i<=mnm)
        {
            res--;
        }
    }
    //cout<<res<<endl;

    res = max(0,res);

    cout<<res<<endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        constrains();
    }


    return 0;
}
