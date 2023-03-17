#include <bits/stdc++.h>
using namespace std;
// 97-122 // a-z
// 65-90 // A-Z

#define pb push_back
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"
#define pout(x) cout << x << "\n"
#define vout(x) for(auto c: x){ cout << c << ' ';} {cout << "\n";}
#define vmax(x)  *max_element(x.begin(), x.end())
#define vmin(x)  *min_element(x.begin(), x.end())
#define lower(x) for(auto& c : x){ c = tolower(c); }
#define upper(x) for(auto& c : x){ c = toupper(c); }


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
    deque<int> v;
    int n, num;
    cin >> n;
    while (cin >> num){
        v.pb(num);
    }

    int leftmost, rightmost;
    int s =0, d = 0;
    const int len = v.size();
    for(int i=0; i < len; i++){
        leftmost = v[0];
        rightmost = v[v.size()-1];
        if (i % 2 == 0){
            if (leftmost < rightmost){
                s += rightmost;
                v.pop_back();
            }
            else{
                s += leftmost;
                v.pop_front();
            }
        }
        else{
            if (leftmost < rightmost){
                d += rightmost;
                v.pop_back();
            }
            else{
                d += leftmost;
                v.pop_front();
            }
        }
    }

    cout << s << ' ' << d << '\n';

    return 0;
}