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
#define maxsbi(x) __lg(x)
#define ffsbi(x) __builtin_ffs(x)


using lld = long double;
using namespace std;


// Problem: A. Make All Equal

void Dev_Sol1()
{
    int n;
    cin>>n;

    map<int, int> mp;

    for(int i=0; i<n; i++){
        int e;
        cin>>e;
        mp[e]++;
    }

    int mx=-1;

    for(auto i: mp){
        mx = max(mx, i.second);
    }

    cout<<n-mx<<endl;
}


// problem: B. Generate Permutation

void Dev_Sol2()
{
    int n;
    cin>>n;

    if(n%2){
        for(int p=n; p>=1; p-=2) cout<<p<<" ";
        for(int p=2; p<n; p+=2) cout<<p<<" ";
        cout<<endl;
    }
    else cout<<-1<<endl;
}




// Problem: C. Guess The Tree


int qry(int x, int y){
    cout<<"? "<<x<<" "<<y<<endl;
    fflush(stdout);

    int q;
    cin>>q;
    return q;
}

void interection(int x, int y, vector<bool>&vs, vector<pair<int,int>>&vp)
{
    int q = qry(x, y);

    if(q==x || q==y){
        vp.push_back({x, y});
        vs[q] = true;
        vs[y] = true;
        return;
    }

    if(vs[x]==true && vs[q]==true){
        interection(q, y, vs, vp);
    }
    else{
        interection(x, q, vs, vp);
        interection(q, y, vs, vp);
    }
}




void Dev_Sol3()
{
    int num;
    cin>>num;

    if(num==2){
        cout<<"! 1 2"<<endl;
        fflush(stdout);
    }
    else{
        vector<bool>tr(num+2);
        vector<pair<int, int>>vp;

        for(int i=1; i<num-1; i++){
            for(int j=i+1; j<=num; j++){
                if(tr[j]==0){
                    interection(i, j, tr, vp);
                }
            }
        }

        cout<<"! ";

        for(auto i: vp){
            cout<<i.first<<" "<<i.second<<" ";
        }cout<<endl;

        fflush(stdout);
    }
}







//Problem:  D. Longest Max Min Subsequence

vector<vector<int>>subsets;


void Subsequences(vector<int>&ara, int n){

    unsigned int sz = (1<<n);

    for(int mask=1; mask<sz; mask++){
        vector<int>subs;
        for(int j=0; j<n; j++){
            if(mask & (1<<j)){
                subs.push_back(ara[j]);
            }
        }
        if(subs.size()==n){
            subsets.push_back(subs);
        }
    }
}



void Dev_Sol4()
{
    int n;
    cin>>n;
    vector<int>v(n), vec;
    vector<bool>vis(n+2);

    for(int i=0; i<n; i++){
        cin>>v[i];
        if(vis[v[i]]==false){
            vis[v[i]] = true;
            vec.push_back(v[i]);
        }

    }

    Subsequences(vec, vec.size());

    for(auto s: subsets){
        for(auto e: s){
            cout<<e<<" ";
        }
        cout<<endl;
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
        Dev_Sol3();
//        Dev_Sol4();
    }

    return 0;
}
