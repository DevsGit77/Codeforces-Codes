#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a, b, mn, mx, r;
    cin>>a>>b;

    mn = min(a,b);
    mx = max(a,b);
    r = (mx - mn)/2;

    cout<<mn<<" "<<r<<endl;


    return 0;
}
