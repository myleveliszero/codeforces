#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"
#define pout(x) cout << x << "\n"
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
    string capslock;
    cin >> capslock;
    // 65-90 // A-Z
    // 97-122// a-z
    bool rule_broke = false;
    for(int i=1; i < capslock.size(); i++){
        if (int(capslock[i]) > 91){
            rule_broke = true;
            break;
        }
    }
    if (rule_broke){
        pout(capslock);
    }
    else{
        if (int(capslock[0]) < 91){
            lower(capslock);
            pout(capslock);
        }
        else{
            lower(capslock);
            capslock[0] = toupper(capslock[0]);
            pout(capslock);
        }
    }

    return 0;
}