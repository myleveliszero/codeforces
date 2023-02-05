#include <bits/stdc++.h>

#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string luckyN;
    int cnt4 = 0, cnt7 = 0;
    bool four = false, seven = false;
    cin >> luckyN;
    for(int i = 0; i < luckyN.size(); i++){
        if (luckyN[i] == '4'){
            cnt4++;
        }
        else if (luckyN[i] == '7'){
            cnt7++;
        }
    }
    string isNearlyLucky = to_string(cnt4+cnt7);
    for(char i: isNearlyLucky){
        if (i != '4' and i != '7'){
            no;
            return 0;
        }
    }
    yes;

    return 0;
}