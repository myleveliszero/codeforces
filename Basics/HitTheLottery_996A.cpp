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
    int n;
    cin >> n;
    // 100 20 10 5 1
    int cnt = 0, rmr = 0;
    
    while (n > 0){
        if(n / 100 != 0){
            rmr = n / 100;
            cnt += rmr;
            n -= 100*rmr;
        }
        else if(n/20 != 0){
            rmr = n / 20;
            cnt += rmr;
            n -= 20*rmr;
        }
        else if(n/10 != 0){
            rmr = n / 10;
            cnt += rmr;
            n -= 10*rmr;
        }
        else if(n/5 != 0){
            rmr = n / 5;
            cnt += rmr;
            n -= 5*rmr;
        }
        else if(n/1 != 0){
            rmr = n / 1;
            cnt += rmr;
            n -= 1*rmr;
        }
    }
    pout(cnt);


    return 0;
}