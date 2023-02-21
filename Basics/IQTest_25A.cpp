#include <bits/stdc++.h>
using namespace std;
// 97-122 // a-z
// 65-90 // A-Z

#define pb push_back
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"
#define pout(x) cout << x << "\n"
#define vout(x) for(auto c: x) { cout << c << " ";}
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
    vector<int> ans;
    viRead(ans);

    vector<int> temp;
    bool evenness = false;
    for(auto i: ans){
        if (i%2 == 0){
            temp.pb(0);
        }
        else{
            temp.pb(1);
        }
    }
    int cntone=0, cntzero=0;
    int idx1 =0, idx0 = 0;
    for(int i=0; i<temp.size(); i++){
        if (temp[i] == 0){
            cntzero++;
            idx0 = i+1;
        }
        else{
            cntone++;
            idx1 = i+1;
        }
    }
    if (cntone > cntzero){
        pout(idx0);
    }
    else{
        pout(idx1);
    }

    return 0;
}