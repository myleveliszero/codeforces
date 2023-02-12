#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES" << "\n";
#define NO cout << "NO" << "\n";
#define pout(x) cout << x << "\n";


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n_levels;
    set<int> total_levels;
    cin >> n_levels;
    int p;
    cin >> p;
    int dummy;
    for (int i = 0; i < p; i++){
        cin >> dummy;
        total_levels.insert(dummy);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        cin >> dummy;
        total_levels.insert(dummy);
    }

    if (total_levels.size() == n_levels){
        pout("I become the guy.")
    }
    else{
        pout("Oh, my keyboard!")
    }
    

    return 0;
}