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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    set<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    pout(4 - s.size())

    return 0;
}