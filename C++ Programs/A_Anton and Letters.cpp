#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt=0;
    string a;
    getline(cin,a);
    sort(a.begin(), a.end());

    for(int i = 0; i<a.size()-1; i++)
    {
        if(a[i]=='{}' || a[i]==',' || a[i]==' ')
        {
            continue;
        }


        else
        {
            if(a[i] != a[i+1])
            {
                cnt++;
            }
        }
    }
    cout<<cnt-1<<endl;


    return 0;
}
