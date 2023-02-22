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
    int n;
    cin >> n;
    vector<int> vi;
    viRead(vi);
    sort(vi.begin(), vi.end());
    int cmax,cmin;
    int ans = INT_MAX;
    for(int i=0,j=n; j < vi.size()+1; i++, j++){
        cmax = 0; 
        cmin = INT_MAX;
        for(int cur= i; cur < j; cur++){
            if (vi[cur] > cmax)
                cmax = vi[cur];
            if (vi[cur] < cmin)
                cmin = vi[cur];
        }
        if (cmax - cmin < ans)
            ans = cmax-cmin;
    }
    pout(ans);

    return 0;
}