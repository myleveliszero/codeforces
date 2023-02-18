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
    string song;
    cin >> song;
    if (song.size() >= 3){
        string ans = "";
        int i=0;
        for (i; i<song.size()-2;){
            if (song[i] == 'W' and song[i+1]=='U' and song[i+2]=='B'){
                i+=3;
                if (ans[ans.size()-1] != ' ' and ans != ""){
                    ans += ' ';
                }
            }
            else{
                ans += song[i];
                i++;
            }
        }
        if (i == song.size()){
            pout(ans);
        }
        else{
            for(i; i<song.size(); i++){
                ans += song[i];
            }
            pout(ans);
        }
    }
    else{
        pout(song);
    }


    return 0;
}