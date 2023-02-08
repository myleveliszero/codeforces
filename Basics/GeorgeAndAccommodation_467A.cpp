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
    int n_rooms, live, capacity, ans=0;
    cin >> n_rooms;
    for(int i=0;  i < n_rooms; i++){
        cin >> live >> capacity;
        if (capacity - live >= 2){
            ans++;
        }
    }
    pout(ans)

    return 0;
}