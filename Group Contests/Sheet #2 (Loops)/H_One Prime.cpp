#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    int n;
    cin>>n;

    bool r = true;

    if(n==1)
        cout<<"NO"<<endl;
    else
    {
        for(int i=2; i<=n/2; i++)
        {
            if(n%i == 0)
                r = false;
        }

        if(r)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}
