#include <bits/stdc++.h>
using namespace std;
// 97-122 // a-z
// 65-90 // A-Z

#define pb push_back
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"
#define pout(x) cout << x << "\n"
#define vout(print_vector) for(auto c: print_vector){ cout << c << ' ';} {cout << "\n";}
#define vmax(x)  *max_element(x.begin(), x.end())
#define vmin(x)  *min_element(x.begin(), x.end())
#define lower(string_to_lower) for(auto& c : string_to_lower){ c = tolower(c); }
#define upper(string_to_upper) for(auto& c : string_to_upper){ c = toupper(c); }
#define vsort(sort_vector) sort(sort_vector.begin(), sort_vector.end())

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string w1, w2, combo;
    cin >> w1 >> w2 >> combo;
    if (w1.size()+w2.size() != combo.size()){
        NO;
        return 0;
    }
    map<char,int> cnt1;
    map<char,int> cnt2;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXZY";
    for(auto ch: alphabet){
        cnt1[ch] = 0;
        cnt2[ch] = 0;
    }

    for(int i=0; i < w1.size(); i++){
        cnt1[w1[i]] += 1;
    }
    for(int i=0; i < w2.size(); i++){
        cnt1[w2[i]] += 1;
    }
    for(int i=0; i < combo.size(); i++){
        cnt2[combo[i]] += 1;
    }
    
    for (int i=0; i < cnt1.size(); i++){
        if (cnt1[i] != cnt2[i]){
            NO;
            return 0;
        }
    }
    YES;

    return 0;
}