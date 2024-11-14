#include <iostream>
using namespace std;

int main()
{
    int n, f=0;
    cin>>n;

    for(int i=2; i<=n; i++)
    {
        if(i%2==0)
        {
            f=1;
            cout<<i<<endl;
        }
    }
    if(f==0)
    {
        cout<<"-1"<<endl;
    }


    return 0;
}
