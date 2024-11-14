#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    int n,cnt1 = 1, cnt2=0;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n-1; i++)
    {
        if((a[i]*a[i+1]) < 0)
        {
            cnt1++;
        }
        else if((a[i]*a[i+1]) > 0)
        {
            cnt2++;
            a[i+1] *= (-1);
        }
    }
    cout<<min(cnt1,cnt2)<<endl;




    return 0;
}
