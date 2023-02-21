#include <bits/stdc++.h>
using namespace std;
// 97-122 // a-z
// 65-90 // A-Z

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
    vector<vector<int>> teams;
    int n, host, guest;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> host >> guest;
        vector<int> temp;
        temp.pb(host);
        temp.pb(guest);
        teams.pb(temp);
    }
    int cnt = 0;
    for(int i=0; i < n; i++){
        for(int j=i+1; j < n; j++){
            if (teams[i][0] == teams[j][1]){
                cnt++;
            }
            if (teams[i][1] == teams[j][0]){
                cnt++;
            }
        }
    }
    pout(cnt);

    return 0;
}