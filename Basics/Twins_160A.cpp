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
    int n_coins, dummy;
    cin >> n_coins;
    vector<int> vi;
    for(int i=0; i < n_coins; i++){
        cin >> dummy;
        vi.push_back(dummy);
    }
    sort(vi.begin(),vi.end());
    int total = 0, forme = 0;
    for(auto i: vi){ total += i;}
    int ans = 0;
    for(int i=vi.size(); i-- > 0; ){
        ans++;
        forme += vi[i];
        if (forme - (total-forme) > 0){
            break;
        }
    }
    pout(ans)

    return 0;
}