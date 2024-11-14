#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Fence()
{
    int n, k, mn=1e9, indx;
    cin>>n>>k;

    vector<int>v(n+1), ps(n+1);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(int i=0; i<n; i++)
        ps[i+1] = ps[i] + v[i];

    for(int i=0; i<=n-k; i++)
    {
        int sum = ps[k+i] - ps[i];

        if(sum<mn)
        {
            mn = sum;
            indx = i+1;
        }
    }

    cout<<indx<<endl;


}


int main()
{
    speed;

    Fence();

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
//
//    }


    return 0;
}
