#include <iostream>
using namespace std;

int main()
{
    int n,o,p,q,r;

    cin>>n;

    while(1)
    {
        n++;
        o = n/1000;
        p = (n/100)%10;
        q = (n/10)%10;
        r = (n%10);

        if(o!=p && o!=q && o!=r && p!=q && p!=r && q!=r)
        {
            break;
        }
    }
    cout<<n;

    return 0;
}
