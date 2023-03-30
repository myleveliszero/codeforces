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
#define vsort(x) sort(x.begin(), x.end())
#define vsum(x, valtype) accumulate(x.begin(), x.end(), valtype)
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
    string first_team;
    cin >> first_team;
    int fcnt = 1, scnt = 0;
    if (n == 1){
        pout(first_team);
        return 0;
    }
    else{
        string cur_team;
        string second_team = "~";
        for(int i=0; i<n-1; i++){
            cin >> cur_team;
            if (cur_team == first_team){
                fcnt++;
            }
            else{
                scnt++;
                if (second_team == "~"){
                    second_team = cur_team;
                }
            }
        }
        if(fcnt > scnt){
            pout(first_team);
        }
        else if (fcnt < scnt){
            pout(second_team);
        }
    }

    return 0;
}