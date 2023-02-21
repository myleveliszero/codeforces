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
    int n, cnt=0;
    cin >> n;
    string polygon;
    for(int i=0; i<n; i++){
        cin >> polygon;
        if (polygon[0] == 'T'){
            cnt += 4;
        }
        else if(polygon[0] == 'C'){
            cnt += 6;
        }
        else if(polygon[0] == 'O'){
            cnt += 8;
        }
        else if(polygon[0] == 'D'){
            cnt += 12;
        }
        else if(polygon[0] == 'I'){
            cnt += 20;   
        }
    }
    pout(cnt);

    return 0;
}