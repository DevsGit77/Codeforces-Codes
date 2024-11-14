#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    int n;
    cin>>n;

    int res = n;

    if(n/10 > res)
    {
        res = n/10;
    }
    if(n%10 + (n/100)*10 > res)
    {
        res = n%10 + (n/100)*10;
    }

    cout<<res<<endl;


    return 0;
}

