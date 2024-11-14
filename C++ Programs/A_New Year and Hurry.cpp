#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,k,t=0,count=0;
    cin>>n>>k;

    for(int i=1; i<=n; i++)
    {
        t = 5*i + k;
        if(t<=240)
        {
            count++;
            k = t;
        }
    }
    cout<<count<<endl;


    return 0;
}
