#include <iostream>

using namespace std;

int main()
{
    int n,sum1=0,sum2=0,sum3=0;
    int ara[101][101];

    cin>>n;
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<3; i++)
        {
            cin>>ara[j][i];
        }
        sum1 += ara[j][0];
        sum2 += ara[j][1];
        sum3 += ara[j][2];

    }
    if(sum1 == 0 && sum2 == 0 && sum3 == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
