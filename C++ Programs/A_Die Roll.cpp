#include <bits/stdc++.h>
using namespace std;


int gcd(int y, int w)
{
    if(y==0)
        return w;
    return gcd(w%y, y);
}



int main()
{
    int y, w, m, a;
    cin>>y>>w;

    m = max(y, w);

    a = 6-m+1;

    cout<< a/gcd(6, a)<<"/"<< 6/gcd(6,a)<<endl;


    return 0;
}
