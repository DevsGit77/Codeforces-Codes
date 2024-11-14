#include <bits/stdc++.h>
#define ll long long
using namespace std;

void Dev_Sol1(){
    int n, a, b, c;
    cin>>n>>a>>b>>c;

    int ara[n+1];

    ara[0] = 0;

    int x, y, z;

    for(int i=1; i<=n; i++)
    {
        x = INT_MIN, y = INT_MIN, z = INT_MIN;

        if(i>=a)
            x = ara[i-a];
        if(i>=b)
            y = ara[i-b];
        if(i>=c)
            z = ara[i-c];

        ara[i] = 1 + max(z, max(x, y));

    }

    cout<<ara[n]<<endl;
}



// ALTERNATIVE


void Dev_Sol_alt(){
    int len, a, b, c;
    cin >> len >> a >> b >> c;

    int res = 0;

    for(int x = 0; x<=len; x++){
        for(int y = 0; y<=len; y++){
            int zc= (len- x*a - y*b);
            if(zc<0) break;
            if(zc%c==0) {
                int z = zc/c;
                res = max(res, x+y+z);
            }
        }
    }

    cout << res << endl;
}


int main()
{

//    Dev_Sol1();
    Dev_Sol_alt();

    return 0;
}
