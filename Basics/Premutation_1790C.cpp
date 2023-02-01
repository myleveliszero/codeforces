#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int n; 
        cin >> n; 
        vector<int> sequence;
        int dummy;
        for (int elt=0; elt < n*n-n; elt++){
            cin >> dummy;
            sequence.push_back(dummy);
        }
       
        vector<int> ans(n+1);
        ans[0] = -1;
        for(int col=0; col < n-1; col++){
            for(int row=0; row < n; row++){
                int idx = sequence[row*(n-1)+col];
                ans[idx] += 1;
            }
            int mxv = *max_element(ans.begin(), ans.end());
            for(int idx = 1; idx < n+1; idx++){
                if (ans[idx] == mxv){
                    cout << idx << " ";
                    ans[idx] = -1;
                    break;
                }
            }
            for(int idx = 1; idx < n+1; idx++){
                if (ans[idx] == n-2){
                    ans[idx] += 1;
                    break;
                }

            }
        }
        for(int idx = 1; idx < n+1; idx++){
            if (ans[idx] == n-1)
                cout << idx << endl;
        }

        
    }
}