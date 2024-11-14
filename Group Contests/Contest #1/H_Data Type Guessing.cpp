/*#include <bits/stdc++.h>
using namespace std;


int main()
{
    double n,k,a;
    cin>>n>>k>>a;


    double d =(n*k)/a;
    long long i = d;
    double m = d-i;


    if(m > 0){
         cout<<"double"<<endl;
    }else if(i <= 2147483647)
        cout<<"int"<<endl;
    else
        cout<<"long long"<<endl;

}*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    double n,k,a;
    cin>>n>>k>>a;

    ll i = (n*k)/a;
    double d, m;
    d = (n*k)/a;
    m = d-i;

    if(m>0)
    {
        cout<<"double"<<endl;
    }
    else if(i> 2147483647)
        cout<<"long long"<<endl;
    else
        cout<<"int"<<endl;


    return 0;
}
