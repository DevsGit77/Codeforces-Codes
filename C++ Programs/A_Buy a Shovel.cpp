#include <bits/stdc++.h>
using namespace std;


int main()
{
    int k,n,count=0;

    cin>>k>>n;

    for(int i=1; ;i++)
    {
        if( (k*i)%10 == n || (k*i)%10 == 0)
        {
            cout<<i<<endl;
            break;
        }
    }



    return 0;
}
