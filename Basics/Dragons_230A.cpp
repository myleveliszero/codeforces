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


bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[0] < v2[0];
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> dragons;
    int power, n, dummy;
    cin >> power >> n;
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<2; j++){
            cin >> dummy;
            temp.pb(dummy);
        }
        dragons.pb(temp);
    }
    sort(dragons.begin(), dragons.end(), sortcol);

    for(int i=0; i<n; i++){
        if (power > dragons[i][0]){
            power += dragons[i][1];
        }
        else{
            NO;
            return 0;
        }
    }
    YES;

    return 0;
}