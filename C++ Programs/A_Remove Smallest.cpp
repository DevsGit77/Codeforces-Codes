#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
   int t;
   cin>>t;

   while(t--)
   {
       int n, dif;
       bool b = true;
       cin>>n;
       int a[n];

       for(int i=0; i<n; i++)
       {
           cin>>a[i];
       }
       sort(a,a+n);

       for(int i=0; i<n-1; i++)
       {
           dif = abs(a[i] - a[i+1]);

           if(dif > 1 )
           {
               b = false;
               break;
           }
       }

       if(b)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }




   return 0;
}
