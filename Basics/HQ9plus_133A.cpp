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
    string HQ9p;
    cin >> HQ9p;
    for(int i = 0; i < HQ9p.size(); i++){
        if (HQ9p[i] == 'H' || HQ9p[i] == 'Q' || HQ9p[i] == '9')
        {
            YES;
            return 0;
        }
    }
    NO;

    return 0;
}