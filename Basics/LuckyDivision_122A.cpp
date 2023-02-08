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
    vector<int> caseone {4,7};
    vector<int> casetwo {44,47,74,77};
    vector<int> casethree {444,447,477,777,774,744,474,747};

    int lucky;
    cin >> lucky;
    if (lucky < 10){
        for (int i=0; i<caseone.size(); i++){
            if (lucky % caseone[i] == 0){
                YES;
                return 0;
            }
        }
    }
    else if (lucky < 100){
        for (int i=0; i<caseone.size(); i++){
            if (lucky % caseone[i] == 0){
                YES;
                return 0;
            }
        }
        for (int i=0; i < casetwo.size(); i++){
            if (lucky % casetwo[i] == 0){
                YES;
                return 0;
            }
        }
    }
    else{
        for (int i=0; i<caseone.size(); i++){
            if (lucky % caseone[i] == 0){
                YES;
                return 0;
            }
        }
        for (int i=0; i < casetwo.size(); i++){
            if (lucky % casetwo[i] == 0){
                YES;
                return 0;
            }
        }

        for (int i=0; i < casethree.size(); i++){
            if (lucky % casethree[i] == 0){
                YES;
                return 0;
            }
        }
    }

    NO;

    return 0;
}