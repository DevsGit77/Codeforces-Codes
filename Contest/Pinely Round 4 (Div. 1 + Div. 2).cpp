#include <bits/stdc++.h>
#define ll long long
#define fl(i,a,n) for (int i=a; i<n; i++)
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



/// Problem: A. Maximize the Last Element

void Dev_Sol()
{
    int n;
    cin>>n;

    vector<int>ara(n);

    int maxNum = INT_MIN;
    maze(n){
        cin>>ara[i];

        if(i%2 != 1) maxNum = max(maxNum, ara[i]);
    }

    cout<<maxNum<<endl;

}



/// Problem: B. AND Reconstruction


void Dev_Sol2()
{
    int n;
    cin>>n;

    vector<int>ara(n), res(n+2, 0);

    maze(n-1){
        cin>>ara[i];
        for(int b = 0; b<30; b++){
            int r = (1<<b);

            if((ara[i]&r) != 0){
                res[i] |= r;
                res[i+1] |= r;
            }
        }
    }

    maze(n-1){
        if(ara[i] != (res[i]&res[i+1])){
            cout<<-1<<endl;
            return;
        }
    }

    maze(n){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}





/// Problem: C. Absolute Zero



void Dev_Sol3()
{
    int n;
    cin>>n;

    vector<int>ara(n), res;

    int mxe = 0, mne = 1e9;

    maze(n){
        cin>>ara[i];
        mxe = max(mxe, ara[i]);
        mne = min(mne, ara[i]);
    }


    for(int i=0; i< 40 && mxe !=0; i++){

        ll balance = acm(ara, 0LL)/ara.size();

        res.push_back(balance);

        fl(j, 0, n){
            ara[j] = abs(ara[j]-balance);
        }
        mxe = *max_element(ara.begin(), ara.end());
    }

    //mxe = *max_element(ara.begin(), ara.end());

    if(mxe != 0){
        cout<<-1<<endl;
        return;
    }

    cout<<res.size()<<endl;

    for(auto e : res){
        cout<<e<<" ";
    }
    cout<<endl;

}




int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
//        Dev_Sol();
//        Dev_Sol2();
        Dev_Sol3();
    }

    return 0;
}
