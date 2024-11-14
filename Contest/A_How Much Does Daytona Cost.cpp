#include <bits/stdc++.h>
using namespace std;


void sol(int t)
{
    while(t--)
    {
        int n,k,c=0;
        cin>>n;
        cin>>k;
        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==k)
            {
                c=1;
            }
        }
        if(c==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}

int main()
{
    int t;
    cin>>t;
    sol(t);
}
