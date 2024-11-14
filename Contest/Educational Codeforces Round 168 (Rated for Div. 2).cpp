#include <bits/stdc++.h>
#define ll long long
#define fl(i, a,n) for (int i=a; i<n; i++)
#define maze(i, n) for (int i=1; i<n; i++)
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

using lld = long double;
using namespace std;


/// Problem : A. Strong Password

void Dev_Sol()
{
    string pass, npass;
    cin>>pass;

    int tm=INT_MIN;

    for(int i=0; i<pass.size(); i++){
        for(char ch = 'a'; ch<='z'; ch++){
            string ps = pass.substr(0, i)+ch+pass.substr(i);

            int nt=2;
            for(int j=0; j<ps.size()-1;j++){
                if(ps[j]==ps[j+1]) nt++;
                else nt += 2;
            }

            if(nt>tm){
                tm = nt;
                npass = ps;
            }
        }
    }

    cout<<npass<<endl;

}



/// Problem:C. Even Positions


void Dev_Sol3()
{
    ll n;
    cin>>n;

    string brak;
    cin>>brak;

    stack<int>bucket;

    ll res=0;

    bucket.push(0);

    maze(i, n){
        if(brak[i]=='(') bucket.push(i);
        else if(brak[i]==')'){
            int rem = bucket.top();
            bucket.pop();
            res = res + (i-rem);
        }
        else{
            if(!bucket.empty()){
                int rem = bucket.top();
                bucket.pop();

                res = res +(i-rem);
            }
            else bucket.push(i);
        }

    }

    cout<<res<<endl;
}





/// Problem: B. Make Three Regions


void Dev_Sol2()
{
    int n;
    cin>>n;

    string f, s;
    cin>>f>>s;

    bool can = false;

    fl(i, 0, n){
        if(f[i]=='.'||s[i]=='.'){
            can = true;
            break;
        }
    }

    if(!can) cout<<0<<endl;
    else{
        int res=0;

        fl(i, 1, n-1){
            if(f[i]=='.' && f[i-1]=='x'&& s[i-1]!='x' && f[i+1]=='x' && s[i+1]!='x') res++;
            if(s[i]=='.' && f[i-1]!='x'&& s[i-1]=='x' && f[i+1]!='x' && s[i+1]=='x') res++;
        }
        cout<<res<<endl;
    }
}




int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
//        Dev_Sol();
//        Dev_Sol3();
        Dev_Sol2();
    }

    return 0;
}
