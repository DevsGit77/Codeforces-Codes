#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void sumCheck(int n)
{
    int count = 0;

    while(n--)
    {
        string s;
        string s1 = "Tetrahedron";
        string s2 = "Cube";
        string s3 = "Octahedron";
        string s4 = "Dodecahedron";
        string s5 = "Icosahedron";

        cin>>s;


        if(s == s1)
        {
            count += 4;
        }
        else if(s == s2)
        {
            count += 6;
        }
        else if(s == s3)
        {
            count += 8;
        }
        else if(s == s4)
        {
            count += 12;
        }
        else if(s == s5)
            count += 20;
    }
    cout<<count<<endl;
}


int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

    int n;
    cin>>n;

    sumCheck(n);


    return 0;
}
