#include <bits/stdc++.h>

using namespace std;

int main()
{

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string players;
    int onecnt = 0, zerocnt = 0;
    cin >> players;
    for(int i = 0; i < players.size(); i++){
        if (players[i] == '0'){
            zerocnt++;
            onecnt = 0;
        }
        else{
            onecnt++;
            zerocnt = 0;
        }
        if (onecnt == 7 or zerocnt == 7){
            cout << "YES" << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";

    return 0;
}