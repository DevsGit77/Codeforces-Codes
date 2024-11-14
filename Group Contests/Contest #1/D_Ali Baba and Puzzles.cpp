#include <bits/stdc++.h>
using namespace  std;
#define ll long long


int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll e,f,g,h,i,j,k,l,m,n;

    e = a+b-c;
    f = a-b+c;
    g = a+(b*c);
    h = (a*b)+c;
    i = a-(b*c);
    j = (a*b)-c;
    k = a*(b+c);
    l = (a+b)*c;
    m = a*(b-c);
    n = (a-b)*c;

    if(d==e)
        cout<< "YES" <<endl;
    else if(d==f)
        cout<< "YES" <<endl;
    else if(d==g)
        cout<< "YES" <<endl;
    else if(d==h)
        cout<< "YES" <<endl;
    else if(d==i)
        cout<< "YES" <<endl;
    else if(d==j)
        cout<< "YES" <<endl;
    else if(d==k)
        cout<< "YES" <<endl;
    else if(d==l)
        cout<< "YES" <<endl;
    else if(d==m)
        cout<< "YES" <<endl;
    else if(d==n)
        cout<< "YES" <<endl;
    else
        cout<<"NO"<<endl;



    return 0;
}
