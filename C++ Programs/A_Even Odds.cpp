#include <iostream>
using namespace std;

int main()
{
    long long int n,k,r;

    cin>>n>>k;

    if(n%2==0)
    {
        r = n/2;
    }
    else
    {
        r = (n/2)+1;
    }
    if(k <= r)
    {
        k = k*2 - 1;
    }
    else
    {
        k = (k-r)*2;
    }
    cout<<k<<endl;

    return 0;
}
