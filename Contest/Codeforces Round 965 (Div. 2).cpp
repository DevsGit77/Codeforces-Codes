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



/// Problem:  A. Find K Distinct Points with Fixed Center

void Dev_Sol1()
{
    ll a, b, k;
    cin>>a>>b>>k;

    vector<pair<int, int>> vp;

    if(k%2==1) vp.push_back({a, b});

    for(int i=1; i<= k/2; i++){
        vp.push_back({a-i, b-i});
    }

    for(int i=1; i<= k/2; i++){
        vp.push_back({a+i, b+i});
    }

    for(auto pr: vp){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}




/// Problem: B. Minimize Equal Sum Subarrays

void Dev_Sol2()
{
    int n;
    cin>>n;

    vector<int>pr(n);

    for(int i=0; i<n; i++){
        cin>>pr[i];
        if(pr[i]==n) pr[i] = 1;
        else pr[i]++;
    }

    for(auto e: pr){
        cout<<e<<" ";
    }
    cout<<endl;
}


/// Problem: C. Perform Operations to Maximize Score

void Dev_Sol3()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<int> ord(n);
    iota(ord.begin(), ord.end(), 0); // Fill ord with 0, 1, ..., n-1

    // Sort indices based on the values in a in descending order
    sort(ord.begin(), ord.end(), [&](int i, int j) {
        return a[i] > a[j];
    });

    int need = ((n - 1) >> 1) + 1;
    int64_t low = 0, high = 1e10;

    while (low < high) {
        int64_t mid = (low + high + 1) >> 1;
        bool ok = false;

        // Check if there exists an index with b[i] == 1 that satisfies the condition
        for (int i : ord) {
            if (b[i] == 1) {
                if (a[i] + k >= mid) {
                    ok = true;
                } else {
                    int64_t x = mid - a[i] - k;
                    int rem = need;

                    // Count how many elements can satisfy the condition
                    for (int j : ord) {
                        if (j == i) continue;
                        if (rem == 0) break;
                        if (a[j] >= x) rem--;
                    }

                    if (rem == 0) ok = true;
                }
                break;
            }
        }

        // Check if there exists an index with b[i] == 0 that satisfies the condition
        if (!ok) {
            for (int i : ord) {
                if (b[i] == 0) {
                    int64_t rem = need;
                    int64_t sum = 0;
                    int64_t x = mid - a[i];

                    for (int j : ord) {
                        if (j == i) continue;
                        if (rem == 0) break;
                        if (a[j] >= x) {
                            rem--;
                        } else if (b[j]) {
                            sum += x - a[j];
                            rem--;
                        }
                    }

                    if (rem == 0 && sum <= k) {
                        ok = true;
                    }
                    break;
                }
            }
        }

        if (ok) {
            low = mid; // Increase lower bound
        } else {
            high = mid - 1; // Decrease upper bound
        }
    }

    cout << low << '\n'; // Output
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
    }

    return 0;
}
