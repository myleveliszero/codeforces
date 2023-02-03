#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ans=0;
    string row;
    cin >> n >> row;
    for(int i=0; i< n - 1; i++){
        if(row[i] == row[i+1]){
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
    
}