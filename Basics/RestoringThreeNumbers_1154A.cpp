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
    int i,j,k,l;
    cin >> i >> j >> k >> l;
    int abc = max({i,j,k,l});
    if (abc == i){
        cout << abc-j << " " << abc-k << " " << abc-l << "\n";
    }
    else if (abc == j){
        cout << abc-i << " " << abc-k << " " << abc-l << "\n";
    }
    else if (abc == k){
        cout << abc-j << " " << abc-i << " " << abc-l << "\n";
    }
    else{
        cout << abc-j << " " << abc-k << " " << abc-i << "\n";
    }

    return 0;
}