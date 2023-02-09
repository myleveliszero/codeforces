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
    long long int n, k;
    cin >> n >> k;

    bool even = n % 2 == 0;

    if (even){
        if (n / 2 >= k){
            //  1 3 5 7
            pout(1 + (k-1)*2)

        }
        else{
            // 2 4 6 8
            k %= (n/2);
            if (k == 0) k = (n/2);
            pout(2+(k-1)*2)

        }
    }
    else{
        if (n/2 + 1 >= k){
            pout(1 + (k-1)*2)
        }
        else{
            k %= (n/2 + 1);

            if (k == 0) k = (n/2);
            
            pout(2+(k-1)*2)
        }   
    }
    
    return 0;
}