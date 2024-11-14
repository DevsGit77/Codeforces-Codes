#include <iostream>
using namespace std;

int main()
{
    int t,i;
    long long int a,b;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b;

        if(a%b == 0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<b-(a%b)<<endl;
        }
    }

    return 0;
}
