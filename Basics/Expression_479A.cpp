#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"
#define pout(x) cout << x << "\n"
#define pb push_back
#define vmax(x)  *max_element(x.begin(), x.end())

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> ans;
    ans.pb(a+b+c);
    ans.pb(a*b*c);
    ans.pb(a+(b*c));
    ans.pb((a+b)*c);
    ans.pb(a*(b+c));
    ans.pb((a*b)+c);
    pout(vmax(ans));

    return 0;
}   