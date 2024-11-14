#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;



//int gcd(int a, int b)
//{
//    int res = min(a, b);
//    while (res > 0) {
//        if (a % res == 0 && b % res == 0) {
//            break;
//        }
//        res--;
//    }
//    return res;
//}


void Problemset()
{
    int a, b;
    cin>>a>>b;

    //int div = a/b;

    while(a%b != 0)
    {
         b=((a-1)/(a/b))+1;
    }
    cout<<a/b<<endl;
}

int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Problemset();
    }

    return 0;
}
