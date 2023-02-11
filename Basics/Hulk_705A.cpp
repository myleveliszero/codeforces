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
    string feelings;
    int n ;
    cin >> n;
    for(int i=0; i < n-1; i++){
        if( i % 2 == 1){
            feelings += "I love that ";
        }
        else{
            feelings += "I hate that ";
        }  
    }
    if (n % 2 == 0){
        feelings += "I love it";
    }
    else{
        feelings += "I hate it";
    }
    pout(feelings)

    return 0;
}