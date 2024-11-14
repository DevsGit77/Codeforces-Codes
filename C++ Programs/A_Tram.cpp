#include <iostream>
using namespace std;

int main()
{
    int s,sum=0,c=0,i,en,ex;

    cin>>s;

    for(i=1; i<=s; i++)
    {
        cin>>ex>>en;

        sum = (ex+c)-en;
        if(sum<0)
        {
            c = 0;
        }
        else
            c = sum;
    }

    cout<<sum;

    return 0;
}
