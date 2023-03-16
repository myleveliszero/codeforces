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
#define lower(x) for(auto& c : x){ c = tolower(c); }
#define upper(x) for(auto& c : x){ c = toupper(c); }
#define fastInput ios_base::sync_with_stdio(false); cin.tie(NULL);

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

    int t; cin >> t;
    while(t--){
        vector<int> v;
        viRead(v);
        for(int i=1;i<v.size();i++){
            if (v[i] != v[0]){
                if (i == 1){
                    if (v[2] == v[0]) 
                        pout(2);
                    else
                        pout(1);
                }
                else if (i > 1)
                    pout(i+1);
                break;
            }
        }
    }

    return 0;
}