#include <bits/stdc++.h>
#define ll long long
using namespace std;


int gcd(int a, int b)
{
    if(a%b==0)
        return b;
    return gcd(b, a%b);
}


int main()
{
    int n1, n2;
    cin>>n1>>n2;

    cout<<gcd(n1,n2)<<endl;


    return 0;
}

