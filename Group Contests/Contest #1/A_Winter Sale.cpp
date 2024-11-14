#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, p, bp;

    cin>>x>>p;

    bp = p/(1-(x/100.0));

    cout<<fixed<<setprecision(2)<<bp<<endl;


    return 0;
}
