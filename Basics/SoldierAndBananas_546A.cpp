#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,n,w;
    cin >> k >> n >> w;
    int i = 1;
    while (w--){
        n -= k*i;
        i += 1;
    }

    if (n >= 0)
        cout << 0 << "\n";
    else
        cout << abs(n) << "\n";

    

    return 0;
}