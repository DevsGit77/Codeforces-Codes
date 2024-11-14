#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
    int n, tem, rev=0;

    cin>>n;

    tem = n;

    while(n)
    {
        rev = rev*10 + n%10;

        n /= 10;
    }

    if(tem == rev)
        cout<<rev<<endl<<"YES"<<endl;
    else
        cout<<rev<<endl<<"NO"<<endl;


    return 0;
}
