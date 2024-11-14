#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n, r, ec=0, oc=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>r;
            if(r%2==0)
                ec++;
            else
                oc++;
        }

        if(ec == oc)
            cout<<"0"<<endl;
        else if(n%2 != 0)
            cout<<"-1"<<endl;
        else
            cout<<abs(ec-oc)/2<<endl;
    }


    return 0;
}

