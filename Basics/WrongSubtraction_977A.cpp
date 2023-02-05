#include <bits/stdc++.h>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , k ;
    cin >> n;
    cin >> k;

    while (k--){
        if (n % 10 == 0){
            n /= 10;
        }
        else{
            n -= 1;
        }
        
    }
    cout << n << "\n";

    return 0;
}