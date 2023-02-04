#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string word;
    cin >> word;
    int cntup = 0, cntlow = 0;
    for (auto i: word){
        if (islower(i)){
            cntlow += 1;
        }
        else{
            cntup += 1;
        }
    }
    if (cntlow >= cntup ){
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }
    else{
        transform(word.begin(), word.end(),word.begin(), ::toupper);
    }


    return 0;
}