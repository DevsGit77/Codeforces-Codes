

/// Interactive Problem Training Contest

#include <bits/stdc++.h>
#define ll long long
#define fl(a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define acm(v, x) accumulate(v.begin(), v.end(), x)
#define cnt(v, x) count(v.begin(), v.end(), x)
#define sm [](int x, int y) {return x+y;}
#define lcm(a, b)  a*b/__gcd(a, b)
#define bit_count(a) __builtin_popcount(a)
#define clr_LSB(n, i) ( n & ~((1<<(i+1))-1) )
#define clr_MSB(n, i) (  n & ((1<<(i+1))-1) )

using lld = long double;
using namespace std;


///  Interactive Problem Training Contest (GYM)


void Dev_Sol()
{
    int left = 1, right=1e6;
    while(left != right){
        int mid = (left+right+1)/2;

        printf("%d\n", mid);

        fflush(stdout);

        char s[3];
        scanf("%s", s);

        if(strcmp(s, "<")==0) right = mid-1;
        else left = mid;

    }

    printf("! %d\n", left);
    fflush(stdout);
}



void Dev_Sol1()
{
    int left = 1, right=1e6;
    while(left != right){
        int mid = (left+right+1)/2;

        cout<<mid<<endl;

        fflush(stdout);

        string s;
        cin>>s;

        if(s[0]=='<') right = mid-1;
        else left = mid;

    }

    cout<<"! "<<left<<endl;
    fflush(stdout);
}






int main()
{
    speed;

//    Dev_Sol();
    Dev_Sol1();

    return 0;

}
