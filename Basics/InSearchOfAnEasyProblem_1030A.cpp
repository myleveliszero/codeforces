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
    int n, cur;
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> cur;
        if (cur == 1){
            pout("HARD")
            return 0;
        }
    }
    pout("EASY")

    return 0;
}