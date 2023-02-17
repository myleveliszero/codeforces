#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"
#define pout(x) cout << x << "\n"
#define vmax(x)  *max_element(x.begin(), x.end())
#define vmin(x)  *min_element(x.begin(), x.end())

void viRead(vector<int>& vi){
    int n, dummy;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> dummy;
        vi.pb(dummy);
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> seq;
    viRead(seq);
    int sum = 0, ans = 0;
    vector<int> cnt(4, 0);
    for(int i=0; i< seq.size(); i++){
        if (seq[i] == 4){
            cnt[0]++;
        }
        else if (seq[i] == 3){
            cnt[1]++;
        }
        else if (seq[i] == 2){
            cnt[2]++;
        }
        else{
            cnt[3]++;
        }
    }
    // 4 3 2 1
    ans += cnt[0];
    ans += cnt[2]/2;
    
    if (cnt[1] > cnt[3]){

        ans += cnt[3];
        cnt[1] -= cnt[3];
        ans += cnt[1];

        if (cnt[2] % 2 == 1){
            ans += 1;
            pout(ans);
        }
        else{ pout(ans); }
        
        return 0;
    } 
    else if (cnt[1] < cnt[3]){
        ans += cnt[1];
        cnt[3] -= cnt[1];

        if (cnt[2] % 2 == 1){
            if (cnt[3] >= 2){
                cnt[3] -= 2;
                ans += 1;
                if (cnt[3] != 0){
                    int rmr = 1;
                    if (cnt[3]%4 == 0)
                        rmr = 0;
                    ans += cnt[3]/4 + rmr;
                }
                pout(ans);
            }
            else{
                ans += 1;
                pout(ans);
            }
        }
        else{
            if (cnt[3] != 0){
                int rmr = 1;
                if (cnt[3]%4 == 0)
                    rmr = 0;
                ans += cnt[3]/4 + rmr;
            }
            pout(ans);
        }

        return 0;
    }
    else{
        ans += cnt[1]; // or ans+= cnt[3];

        if (cnt[2] % 2 == 1){
            ans += 1;
            pout(ans);
        }
        else{ pout(ans); }

        return 0;
    }
}

   