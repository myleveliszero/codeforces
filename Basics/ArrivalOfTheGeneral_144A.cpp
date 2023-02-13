#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"
#define pout(x) cout << x << "\n"
#define vmax(x)  *max_element(x.begin(), x.end())
#define vmin(x)  *min_element(x.begin(), x.end())


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
    vector<int> soldiers;
    int dummy;
    for(int i=0; i<n; i++){
        cin >> dummy;
        soldiers.pb(dummy);
    }
    int val_max = 0, val_min = 101;
    int idx_max = 0, idx_min = 0;    
    for (int i=0; i<n; i++){
        if (soldiers[i] > val_max){
            val_max = soldiers[i];
            idx_max = i+1;
        }
        if (soldiers[i] <= val_min){
            val_min = soldiers[i];
            idx_min = i+1;
        }
    }
    if (idx_max > idx_min){
        pout((idx_max-1) + (n-idx_min) - 1);
    }
    if (idx_max < idx_min){
        pout((idx_max-1) + (n-idx_min));
    }

    return 0;
}