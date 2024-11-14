#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    int n, num, ce = 0, cOdd = 0, cp=0, cn = 0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>num;

        if(num>0)
            cp++;
        if(num<0)
            cn++;
        if(num%2==0)
            ce++;
        if(num%2 != 0)
            cOdd++;
    }

    cout<<"Even: "<<ce<<endl;
    cout<<"Odd: "<<cOdd<<endl;
    cout<<"Positive: "<<cp<<endl;
    cout<<"Negative: "<<cn<<endl;

    return 0;
}
