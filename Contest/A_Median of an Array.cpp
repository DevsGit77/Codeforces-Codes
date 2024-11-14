#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Median()
{
   ll n;
   cin>>n;

   vector<ll>ara(n);

   ll cnt=0;

   for(int i=0; i<n; i++) cin>>ara[i];

   sort(ara.begin(), ara.end());

   ll md = ceil(1.0*n/2) - 1;

   for(int i=md; i<n; i++)
   {
       if(ara[i] == ara[md])
        cnt++;
   }

   cout<<cnt<<endl;

}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Median();
    }

    return 0;
}

