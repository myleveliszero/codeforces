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
    int rows, cols;
    cin >> rows >> cols;
    string left = "#", body = "#", right = "#";
    for(int i=1; i < cols; i++){
        left = "." + left;
        right = right + ".";
        body += "#";
    }
    bool isLeftTime = true;
    bool isRightTime = false;
    for(int i=0; i < rows; i++){
        if (i%2 == 0){
            pout(body);
        }
        else{
            if (isLeftTime){
                pout(left);
                isLeftTime = false;
                isRightTime = true;
            }
            else{
                pout(right);
                isLeftTime = true;
                isRightTime = false;
            }
        }
    }

    return 0;
}