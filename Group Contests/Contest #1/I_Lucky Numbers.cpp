#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int r,t;
    r=n/10;
    t=n%10;

    if(n==10 || n== 99 || t==0)
        cout<<"YES"<<endl;
    else if(r%t==0 || t%r == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }



    return 0;
}
