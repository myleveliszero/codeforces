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
#define vsort(x) sort(x.begin(), x.end())
#define vsum(x, valtype) accumulate(x.begin(), x.end(), valtype)
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
    int a1,a2,a3,a4;
    cin >> a1 >> a2 >> a3 >> a4;
    int cnt1 = 0,cnt2 = 0,cnt3 = 0,cnt4 = 0;
    string s;
    cin >> s;
    for(int i=0; i < s.size(); i++){
        if(s[i] == '1')
            cnt1++;
        else if (s[i] == '2')
            cnt2++;
        else if (s[i] == '3')
            cnt3++;
        else if (s[i] == '4')   
            cnt4++; 
    }
    pout(a1*cnt1+a2*cnt2+a3*cnt3+a4*cnt4);

    return 0;
}