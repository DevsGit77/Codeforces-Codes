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


void Dev_Sol()
{
    vector<vector<char>> v(3, vector<char> (3));
    int r[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>v[i][j];
        }
    }

    vector<string> vs;

    for(int r1=0; r1<3; r1++){
        for(int r2=0; r2<3; r2++){
            for(int r3=0; r3<3; r3++){
                for(int c1=0; c1<3; c1++){
                    for(int c2=0; c2<3; c2++){
                        for(int c3=0; c3<3; c3++){
                            r[r1][c1] = 1;
                            r[r2][c2] = 2;
                            r[r3][c3] = 3;

//                            cout<<r[r1][c1] <<" "<< r[r2][c2] << " "<<r[r3][c3]<<endl;

                            if(r[r1][c1] == 1 && r[r2][c2] == 2 && r[r3][c3] == 3){
                                r[r1][c1] = r[r2][c2] = r[r3][c3] = 0;

                                if(abs(r1 - r2) < 2 && abs(c1 - c2) < 2 && abs(r2 - r3) < 2 && abs(c2 - c3) < 2){
                                    string s;
                                    s = s + v[r1][c1] + v[r2][c2] + v[r3][c3];
                                    vs.push_back(s);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    sort(vs.begin(), vs.end());

    cout<<vs[0]<<endl;
}


int main()
{
    speed;


    Dev_Sol();

    return 0;
}
