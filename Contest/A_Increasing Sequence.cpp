#include <bits/stdc++.h>

using namespace std;

typedef long long ll;



void sol(int k)
{
    while(k--)
    {
        int r;
        cin>>r;
        ll a[r];
        int b=1,c=0;
        for(int i = 0; i<r; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<r; i++)
        {
            if(a[i]==b)
            {
                b = a[i]+1;
            }
            if(i == r-1)
            {
                break;
            }
            b++;
        }

        cout<<b<<endl;
    }

}


int main()
{
    int t;
    cin>>t;

    sol(t);


    return 0;
}
