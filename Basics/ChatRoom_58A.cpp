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
    string hello;
    cin >> hello;
    vector<char> isfind{'h', 'e','l','l','o'};
    int idx = 0;
    for(int i=0; i<hello.size(); i++){
        if (isfind[idx] == hello[i]){
            idx++;
        }
    }
    if (idx == 5) {YES}
    else {NO}
    

    return 0;
}