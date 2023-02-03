#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, rmr=0;
    cin >> x;
    if (x % 5 != 0)
        rmr = 1;
    cout << x / 5 + rmr  << "\n";
    
    return 0;
}