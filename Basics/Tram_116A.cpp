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
    int n, in, out,cur = 0, ans = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> out >> in;
        cur -= out;
        cur += in;
        if( ans < cur){
            ans = cur;
        }
    }
    pout(ans)

    return 0;
}