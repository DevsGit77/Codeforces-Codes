#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int s[n];

    for(i=0; i<n; i++)
    {
        cin>>s[i];
    }

    for(j=1; j<=n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(s[i]== j)
            {
                cout<<i+1<<" ";
            }
        }
    }

    return 0;
}
