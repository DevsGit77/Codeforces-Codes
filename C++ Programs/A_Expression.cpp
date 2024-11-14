#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,e1,e2,e3,e4,e5,ans;

    cin>>a>>b>>c;

    e1 = a+b+c;
    e2 = a+b*c;
    e3 = a*(b+c);
    e4 = a*b*c;
    e5 = (a+b)*c;

    ans = max(e5,max(e4,max(e3,max(e1,e2))));

    cout<<ans<<endl;


    return 0;
}
