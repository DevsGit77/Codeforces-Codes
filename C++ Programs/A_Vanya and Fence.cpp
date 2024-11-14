#include <iostream>
using namespace std;

int main()
{
    int n, h, i, c=0, c1=0;

    cin>>n>>h;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if( a[i] <= h )

            c++;
        else
            c1+=2;
    }
    cout<<c+c1<<endl;

    return 0;

}
