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
    string str;
    cin >> str;
    if (str.size() == 1){
        cout << 0;
        return 0;
    }
    for(int i=0; i < str.size();){
        if (str[i] == '-'){
            if (str[i+1] == '-'){
                cout << 2;
            }
            else if (str[i+1] == '.'){
                cout << 1;
            }
            i += 2;
        }
        else if (str[i] == '.'){    
            cout << 0;
            i++;
        }
    }


    return 0;
}