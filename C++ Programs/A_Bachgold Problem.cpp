#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Bachgold()
{
    int n;
    cin>>n;

    int rem = n/2;

    if(n%2 == 0)
    {
        cout<<rem<<endl;
        for(int i=0; i<rem; i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        cout<<rem<<endl;
        n -= 3;
        cout<<3<<" ";

        for(int i=0; i< rem-1; i++)
        {
            cout<<2<<" ";
        }
    }


}


int main()
{
    speed;

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
        Bachgold();
//    }

    return 0;
}
