#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    int n, cnt=0;
    cin>>n;

    while(n)
    {
        if(n&1)
        {
            cnt++;
        }
        n = n>>1;
    }
    cout<<cnt<<endl;




    return 0;
}
