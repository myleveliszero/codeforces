#include <bits/stdc++.h>

#define YES cout << "YES" << "\n";
#define NO cout << "NO" << "\n";
#define pout(x) cout << x << "\n"; // print output

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ngames = 0;
    cin >> ngames;
    int a = 0, d = 0;
    char winner;
    while(ngames--){
        cin >> winner;
        if (winner == 'A')
            a++;
        else if ( winner == 'D') // just "else" 
            d++;
    }
    if (a > d){
        pout("Anton");
    }
    else if (d > a){
        pout("Danik");
    }
    else{
        pout("Friendship");
    }

    return 0;
}