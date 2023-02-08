#include <bits/stdc++.h>

#define YES cout << "YES" << "\n";
#define NO cout << "NO" << "\n";
#define pout(x) cout << x << "\n";

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, h,dummy, ans = 0;
    cin >> n >> h;
    vector<int> v;
    for (int i =0; i< n; i++){
        cin >> dummy;
        v.push_back(dummy);
    }

    for (int i=0; i<n; i++){
        if (v[i] > h)
            ans += 2;
        else
            ans++;
    }

    pout(ans)

    return 0;
}