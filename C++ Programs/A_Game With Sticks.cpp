#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    int n, m, min_num;
    cin>>n>>m;

    min_num = min(n,m);


    if(min_num%2==0)
        cout<<"Malvika"<<endl;
    else
        cout<<"Akshat"<<endl;

    return 0;
}
