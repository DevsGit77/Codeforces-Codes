#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int k;
    cin>>k;

    for(int i=1; ; i++)
    {
        if(i%3 == 0 || i%10 == 3)
            continue;

        if(--k == 0)
        {
            cout<<i<<endl;
            break;
        }

    }

}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        sol();
    }


    return 0;
}