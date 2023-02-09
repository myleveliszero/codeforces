#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES" << "\n";
#define NO cout << "NO" << "\n";
#define pout(x) cout << x << "\n";

string solve(string magnets, int* start, int end, int* ans){
    string isok;
    if (magnets[0] == '1' and magnets[1] == '0'){
        for( int i = *start; i < end; i++){
            cin >> isok;
            if(isok[0] == '1' and isok[1] == '0') 
            {continue;}
            else
            {
                *(ans) += 1;
                *start = i+1;
                return isok;
            }
        } 
    }
    else{
        for( int i = *start; i < end; i++){
            cin >> isok;
            if(isok[0] == '0' and isok[1] == '1') 
            {continue;}
            else
            {
                *(ans) += 1;
                *start = i+1;
                return isok;
            }
        }
    }
    *(ans) += 1;
    return "break";
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int nm;
    // 01 - plus-minus
    // 10 - minus-plus
    cin >> nm;
    string curpair;
    string isnext;
    int ans = 0;
    int start = 0;
    cin >> curpair;
    for(start; start < nm;){
        isnext = solve(curpair, &start, nm, &ans);
        if (isnext == "break" or isnext == ""){
            pout(ans);
            break;
        }
        else{
            curpair = isnext;
        }
    }
    

    return 0;
}