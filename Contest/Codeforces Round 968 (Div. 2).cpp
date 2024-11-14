#include <bits/stdc++.h>
#define ll long long
#define vin(v) for(auto &i: v) cin>>i;
#define vout(v) for(auto i: v) cout<<i<<" "; cout<<endl;
#define fl(i, a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define acm(v, x) accumulate(v.begin(), v.end(), x)
#define cnt(v, x) count(v.begin(), v.end(), x)
#define sm [](int x, int y) {return x+y;}
#define lcm(a, b)  a*b/__gcd(a, b)
#define bit_1count(a) __builtin_popcountll(a)
#define bit_cnt(num) log2(num)+1
#define clr_LSB(n, i) ( n & ~((1<<(i+1))-1) )
#define clr_MSB(n, i) (  n & ((1<<(i+1))-1) )
#define lastsbi(x) __lg(x)
#define ffsbi(x) __builtin_ffs(x)
#define nroot(x, n) pow(x, 1.0/n)


using lld = long double;
using namespace std;

// Problem: A. Turtle and Good Strings


void Dev_Sol1()
{
    int n;
    string str;
    cin>>n>>str;

    if(str[0]== str[n-1]) pn;
    else py;
}



// Problem: B. Turtle and Piggy Are Playing a Game 2


void Dev_Sol2()
{
    int n;
    cin>>n;

    vector<int> ara(n);

    for(int i=0; i<n; i++){
        cin>>ara[i];
    }
    sort(all(ara));


    int mid = n/2;

    cout<<ara[mid]<<endl;
}





// Problem: C. Turtle and Good Pairs

void Dev_Sol3()
{
    int n;
    string st, res="";
    cin>>n>>st;

    map<char, int>mp;

    for(int i=0; i<st.size(); i++){
        mp[st[i]]++;
    }

    while(!mp.empty()){
        for(auto i = mp.begin(); i!=mp.end(); ){
            res += i->first;
            i->second--;
            if(i->second==0) i = mp.erase(i);
            else i++;
        }
    }
    cout<<res<<endl;
}






// Problem: D1. Turtle and a MEX Problem (Easy Version)


void Dev_Sol4()
{
    ll n, m;
    cin>>n>>m;

    ll rem=0;
    ll res=0;

    for(int i=0; i<n; i++){
        int lt;
        cin>>lt;

        map<int, int>mp;

        for(int j=0; j<lt; j++){
            int e;
            cin>>e;
            mp[e]++;
        }

        ll r=1, t=0;

        while(1){
            if(!mp.count(t)){
                if(r) r=0;
                else{
                    rem = max(rem, t);
                    break;
                }
            }
            t++;
        }
    }

    if(rem>=m){
        res = rem*(m+1);
        cout<<res<<endl;
    }
    else{
        ll x = rem*(rem+1);
        ll diff = (m*(m+1)/2) - x/2;
        res = x+diff;

        cout<<res<<endl;
    }

}








int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
//        Dev_Sol1();
//        Dev_Sol2();
//        Dev_Sol3();
        Dev_Sol4();
    }

    return 0;
}
