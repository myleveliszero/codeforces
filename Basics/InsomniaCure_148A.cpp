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
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    set<int> harmed;
    for (int i=1; i <= d/k; i++){
        harmed.insert(k*i);
    }

    for (int i=1; i <= d/l; i++){
        harmed.insert(l*i);
    }

    for (int i=1; i <= d/m; i++){
        harmed.insert(m*i);
    }

    for (int i=1; i <= d/n; i++){
        harmed.insert(n*i);
    }

    pout(harmed.size());

    return 0;
}