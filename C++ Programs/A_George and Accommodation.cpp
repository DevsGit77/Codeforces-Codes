#include <iostream>
using namespace std;

int main()
{
    int n,c;
    int p[101];
    int q[101];

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>p[i]>>q[i];
    }
    for(int j=0; j<n; j++)
    {
        if((q[j]-p[j]) >= 2)
        {
            c++;
        }
    }
    cout<<c<<endl;


    return 0;
}
