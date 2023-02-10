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
    string a,b;
    cin  >> a >> b; 
    string ans = a;
    for (int i=0; i < a.size(); i++){
        if (a[i] == b[i]){
            ans[i] = '0';
        }
        else{
            ans[i] = '1';
        }
    }
    pout(ans)

    return 0;
}