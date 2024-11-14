#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    int a, b, mx, mn, check = 0;

    cin>>a>>b;
    mx = max(a,b);
    mn = min(a,b);

    for(int i=mn; i<=mx; i++)
    {
        int flg = 1;
        int temp = i;

        while(temp > 0)
        {
            int digit = temp % 10;

            temp = temp/10;
            if(digit == 4 || digit ==7)
            {
                continue;
            }
            else
            {
                flg = 0;
                break;
            }
        }

        if(flg)
        {
            cout<<i<<" ";
            check = 1;
        }
    }

    if(!check)
    {
        cout<<-1<<endl;
    }


    return 0;
}
