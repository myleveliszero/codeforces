#include <bits/stdc++.h>
using namespace std;
// 97-122 // a-z
// 65-90 // A-Z

#define pb push_back
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"
#define pout(x) cout << x << "\n"
#define vout(x) for(auto c: x){ cout << c << ' ';} {cout << "\n";}
#define vmax(x)  *max_element(x.begin(), x.end())
#define vmin(x)  *min_element(x.begin(), x.end())
#define vsort(x) sort(x.begin(), x.end())
#define vsum(x, valtype) accumulate(x.begin(), x.end(), valtype)
#define lower(x) for(auto& c : x){ c = tolower(c); }
#define upper(x) for(auto& c : x){ c = toupper(c); }


void viRead(vector<int>& vi){
    int n, dummy;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> dummy;
        vi.pb(dummy);
    }
}


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int a,b,c,d;
        cin >>a>>b>>c>>d;
        if ( a > b and c > d){
            if (b > c or d > a){
                NO;
            }
            else{
                YES;
            }
        }
        else if ( a > b and c < d){
            if (b > d or c > a){
                NO;
            }
            else{
                YES;
            }
        }
        else if (a < b and c > d){
            if (a > c or d > b){
                NO;
            }
            else{
                YES;
            }
        }
        else if (a < b and c < d){
            if (a > d or c > b){
                NO;
            }
            else{
                YES;
            }
        }
    }
    

    return 0;
}