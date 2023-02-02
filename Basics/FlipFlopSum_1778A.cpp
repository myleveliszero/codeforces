#include <bits/stdc++.h>
#include <numeric>
using namespace std;

void solve(vector<int> vi){
    //first check
    for(int i=0; i < vi.size()-1; i++){
        if (vi[i] < 0 and vi[i+1] < 0){
            int a = vi[i]*(-1),b=vi[i+1]*(-1);
            vi[i] = a;
            vi[i+1] = b;
            
            int res = 0;
            for(auto &j : vi){
                res += j;
            }
            cout << res << "\n";
            return;
        }
    }
    // second check
    for(int i=0; i < vi.size()-1; i++){
        if ((vi[i] < 0 and vi[i+1] > 0) or (vi[i] > 0 and vi[i+1] < 0)){
            int a = vi[i]*(-1),b=vi[i+1]*(-1);
            vi[i] = a;
            vi[i+1] = b;
            
            int res = 0;
            for(auto &j : vi){
                res += j;
            }
                
            cout << res << "\n";
            return;
        }
    }
    //third check
    for(int i=0; i < vi.size()-1; i++){
        if (vi[i] > 0 and vi[i+1] > 0){
            int a = vi[i]*(-1),b=vi[i+1]*(-1);
            vi[i] = a;
            vi[i+1] = b;
            
            int res = 0;
            for(auto &j : vi){
                res += j;
            }
                
            cout << res << "\n";
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {   
        int n, dummy;
        cin >> n;
        vector<int> v;
        for (int i=0; i<n; i++){
            cin >> dummy;
            v.push_back(dummy);
        }
        solve(v);
    }      

    return 0;
}