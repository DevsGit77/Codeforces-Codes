#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int t)
{
   while(t--)
   {
        ll n;

        cin>>n;

        if(n<=6 || n==9)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if(n%3==0)
            {
                cout<<1<<" "<< 4 <<" "<<n-5<<endl;
            }
            else
            {
                cout<<1<< " "<< 2 <<" "<<n-3<<endl;
            }
        }
   }
}



int main()
{
    int t;

    cin>>t;
    solve(t);



    return 0;
}
