#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"
#define pout(x) cout << x << "\n"
#define vmax(x)  *max_element(x.begin(), x.end())
#define vmin(x)  *min_element(x.begin(), x.end())


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, dummy;
    vector<int> seq;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> dummy;
        seq.pb(dummy);
    }
    int ans = 0, temp = 1;
    for(int i=0; i< n-1; i++){
        if (seq[i] <= seq[i+1]){
            temp++;
        }
        else{
            if (temp > ans){
                ans = temp;
            } 
            temp = 1;
        }
    }
    if (temp > ans){
        pout(temp);
    }
    else{
        pout(ans);
    }
    

    return 0;
}