#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solveNewYear()
{
    int n, k;
    ll res=1;
    cin>>n>>k;

    vector<int>seq(n);

    for(int i=0; i<n; i++)
    {
        cin>>seq[i];

        res *= seq[i];

    }

    if(2023 % res == 0)
    {
        cout<<"YES"<<endl;
        cout<< 2023/res <<" ";
        --k;
        while(k--)
            cout<<1<<" ";

        cout<<endl;
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

    while(t--)
        solveNewYear();

    return 0;
}
