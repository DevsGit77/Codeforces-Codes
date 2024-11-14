#include <bits/stdc++.h>
#define ll long long
using namespace std;

void EvenArray()
{
    int n;
    cin>>n;

    vector<int>v(n);


    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int ec=0, oc=0;

    for(int i=0; i<n; i++)
    {
        if(i%2 == 0 && v[i]%2 != 0)
        {
            ec++;
        }
        else if(i%2 != 0 && v[i]%2 == 0)
        {
            oc++;
        }
    }

    if(ec != oc)
        cout<<-1<<endl;
    else
        cout<<oc<<endl;
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        EvenArray();
    }


    return 0;
}
