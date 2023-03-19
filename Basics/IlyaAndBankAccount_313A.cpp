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
    int bank;
    cin >> bank;
    if (bank >= 0){ 
        cout << bank;
    }
    else{
        auto s = to_string(bank);
        auto s2 = s;
        s.erase(s.begin() + s.size()-1);
        s2.erase(s2.begin()+s2.size()-2);
        int a,b;
        a = stoi(s);
        b = stoi(s2);
        if (abs(a) < abs(b)){
            pout(a);
        }
        else{
            pout(b);
        }
    }


    return 0;
}