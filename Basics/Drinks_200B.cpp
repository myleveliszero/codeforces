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
    int n;
    cin >> n;
    long double sum = 0,    cur;
    for(int i=0; i<n; i++){
        cin >> cur;
        sum += cur;
    }
    pout((double) sum / n)

    return 0;
}