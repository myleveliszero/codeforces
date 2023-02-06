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
    string w1, w2;
    cin >> w1 >> w2;
    if (w1.size() != w2.size()){
        NO;
        return 0;
    }

    for(int i=0, j=w1.size()-1; i < w1.size(); i++, j--){
        if (w1[i] != w2[j]){
            NO;
            return 0;
        }
    }
    YES;

    return 0;
}
