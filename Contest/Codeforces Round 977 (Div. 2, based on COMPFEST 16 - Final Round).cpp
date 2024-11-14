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
#define pi 3.14159265358979323846264338327950
#define nroot(x, n) pow(x, 1.0/n)

using lld = long double;
using namespace std;


// Problem: A. Meaning Mean

void Dev_Sol1() {
    int n;
    cin >> n;

    multiset<int> q;
    for(int i=0; i<n; i++){
        int e;
        cin >> e;
        q.insert(e);
    }

    while(q.size() != 1){
        auto f = q.begin();
        auto s = f;
        ++s;

        int o = *s, b = *f;

        q.insert((o+b)/2);

        q.erase(f);
        q.erase(s);
    }

    cout << *q.begin() << endl;
}


// Problem: B. Maximize Mex


void Dev_Sol2(){
    int n, x;
    cin >> n >> x;
    map<int, int> mm;

    for(int i=0; i<n; i++){
        int e;
        cin >> e;
        mm[e]++;
    }

    int mex = 0;
    while(mm.size()>0){
        auto it = mm.begin();
        int ele = it->first;
        int rep = it->second;

        if(ele == mex){
            if(rep>1) mm[ele+x] += (rep-1);
            mm.erase(it);
            mex++;
        }
        else break;
    }
    cout << mex << endl;
}


//Problem: C1. Adjust The Presentation (Easy Version)


void Dev_Sol3(){
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> fvec(n), svec;
    vin(fvec);

    int f=-1;
    for(int i=0; i<m; i++){
        int e;
        cin >> e;
        if(f==-1||svec.back() != e){
            svec.push_back(e);
            f=1;
        }
    }
    f=0;
    bool b=true;
    unordered_set<int> st;
    for(int i=0; i<svec.size(); i++){
        if(svec[i]!=fvec[f]){
            if(st.find(svec[i]) == st.end()){
                cout << "TIDAK" << endl;
                return;
            }
        }
        else{
            st.insert(fvec[f]);
            f++;
        }
    }
    cout << "YA" << endl;
}


int main() {
    speed;

    int tc;
    cin>>tc;
    while(tc--) {
//        Dev_Sol1();
//        Dev_Sol2();
        Dev_Sol3();
    }

    return 0;
}
