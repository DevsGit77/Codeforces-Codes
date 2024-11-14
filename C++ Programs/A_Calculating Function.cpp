#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int n,d;
    cin>>n;

    if(n%2==0)
    {
        d = n/2;
        cout<<d<<endl;
    }
    else
    {
        d = -(n/2 + 1);
        cout<<d<<endl;
    }

    return 0;
}
