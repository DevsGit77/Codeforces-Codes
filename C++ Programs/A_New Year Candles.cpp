#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;

void Candles()
{
    int n, b;
    cin>>n>>b;

    int rem=n;

    while(n)
    {
        rem += n/b;
        n = n/b + n%b;
        if(n<b)
            break;
    }

    cout<<rem<<endl;
}


int main()
{
    speed;

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
//
//    }

    Candles();

    return 0;
}

