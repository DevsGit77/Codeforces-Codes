#include <bits/stdc++.h>
#define ll long long
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

using lld = long double;
using namespace std;

///Problem: A - A+B Again?

void Dev_Sol()
{
    int n;
    cin>>n;

    cout<<n/10 + n%10 <<endl;
}


/// Problem: B. Card Game


int check(int n, int m, int o, int p)
{
    int s1=0, s2=0;

    if(n>m) s1++;
    else if(m!=n) s2++;
    if(o>p) s1++;
    else if(o!= p) s2++;
    return s1>s2;
}

void Dev_Sol2()
{
    int x, y, d,f;
    cin>>x>>y>>d>>f;

    int res=0;

    res += check(x, d, y, f) + check(x, f, y, d) + check(y, d, x, f) + check(y, f, x, d);

    cout<<res<<endl;

}


/// Problem: C. Showering


void Dev_Sol3()
{
    int n, s, m;
    cin>>n>>s>>m;

    map<int, int> mpv;

    maze(n)
    {
        int a, b;
        cin>>a>>b;

        mpv.insert({a, b});
    }

    for(auto pr : mpv){
        if(pr.first>= s){
            py;
            return;
        }
        else{
            int d = pr.second;
            for(auto r: mpv){
               if(r.first>d && r.first-d>=s){
                    py;
                    return;
               }
               d = max(d, r.second);
            }

            if(m-d>=s){
                py;
                return;
            }
            pn;
            return;
        }
    }
}




/// Problem: D. Slavic's Exam



void Dev_Sol4()
{
    string os, ss;
    cin>>os>>ss;

    for(int f=0, s=0; f<os.size() && s<ss.size(); ){
        if(os[f]==ss[s]){
            f++;
            s++;
        }
        else if(os[f]=='?'){
            os[f] = ss[s];
            f++;
            s++;
        }
        else f++;

        if(f>=os.size() && s<ss.size()){
            pn;
            return;
        }
    }

    for(int i=0; i<os.size(); i++){
        if(os[i]=='?') os[i] = 'x';
    }

    py;
    cout<<os<<endl;
}




/// Problem: E. Triple Operations


const int N = 2e5+10;

vector<int> v1(N), v2(N);




void Dev_Sol5()
{
    int l, r;
    cin>>l>>r;

    cout<< v2[r] - v2[l-1] + v1[l]<<endl;
}



/// Alternative solution:


vector<int>pref(N);


void Dev_Sol5_Alt()
{
    ll l, r;
    cin>>l>>r;

    ll n = l;
    ll res=0;


    while(n>0){
        n /= 3;
        res += 2;
    }
    res += pref[r]-pref[l];

    cout<<res<<endl;
}





int main()
{
    speed;


    for(int i=1; i<N; i++){
        v1[i] = v1[i/3]+1;
        v2[i] = v1[i] + v2[i-1];
    }


    for(ll i=1; i<N; i++){
        ll cnt=0;
        ll n = i;


        while(n>0){
            n /= 3;
            cnt++;
        }
        pref[i] = cnt;
    }

    for(ll i=1; i<N; i++){
        pref[i] += pref[i-1];
    }



    int tc;
    cin>>tc;

    while(tc--){
//        Dev_Sol();
//        Dev_Sol2();
//        Dev_Sol3();
//        Dev_Sol4();
//        Dev_Sol5();
        Dev_Sol5_Alt();
    }

    return 0;
}
