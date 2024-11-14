#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solSquare()
{
    ll n, sm=0;
    cin>>n;

    ll ara[n];

    for(int i=0; i<n; i++)
    {
        cin>>ara[i];

        sm += ara[i];
    }

    ll smrt = sqrt(sm);

    if(smrt*smrt == sm)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}


int main()
{
    int t;
    cin>>t;

    while(t--) solSquare();

    return 0;
}
