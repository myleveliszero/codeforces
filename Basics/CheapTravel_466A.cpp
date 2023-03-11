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
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    if (b/m < a){
        int times = n/m;  
        if (times == 0){
            if (a*n > b){
                pout(b);
            }
            else{
                pout(a*n);
            }
            return 0;
        }  
        int cost = b*times;
       
        int tickets = times*m;
        int left = n-tickets;
        int case2;
        int case1 = a*left;
        if (left <= m){
            case2 = b;
        }
        else{
            case2 = (left/m)*b;
        }
        
        if (case1 < case2){
            pout(cost+case1);
        }
        else{
            pout(cost+case2);
        }
    }
    else{
        pout(n*a);
    }

    return 0;
}
// 101 110 1 100
// 1 1000 1 2