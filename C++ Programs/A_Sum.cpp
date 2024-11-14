#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    int n;

    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b>>c;
        int s1,s2,s3;
        s1 = a+b;
        s2 = b+c;
        s3 = c+a;

        if(s1 == c || s2 == a || s3 == b)
        {
            cout<< "YES" <<endl;
        }
        else
        {
            cout<< "NO" <<endl;
        }
    }

    return 0;
}
