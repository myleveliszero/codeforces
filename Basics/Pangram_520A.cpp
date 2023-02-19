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
    int len;
    cin >> len;
    if (len < 26){
        NO;
    }
    else{
        string pangram;
        cin >> pangram;
        upper(pangram);
        map<char,int> ans;
        string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXZY";
        for(auto ch: alphabet){
            ans[ch] = 0;
        }
        for(auto ch: pangram){
            ans[ch] = 1;
        }
        for(auto ch: alphabet){
            if (ans[ch] == 0){
                NO;
                return 0;
            }
        } 
        YES;
    }


    return 0;
}