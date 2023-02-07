#include <bits/stdc++.h>

#define YES cout << "YES" << "\n";
#define NO cout << "NO" << "\n";
#define pout(x) cout << x << "\n";

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int len, t;
    string gnb;
    cin >> len >> t >> gnb;
    while(t--){
        string tmp; 
        for (int i=0; i < len; ){
            if(gnb[i] == 'B' and gnb[i+1]=='B'){
                tmp += 'B'; 
                i++;
            }
            else if(gnb[i] == 'B' and gnb[i+1] == 'G'){
                tmp += "GB";
                i += 2;
            }
            else if(gnb[i] == 'G' and gnb[i+1] == 'G'){
                tmp += "GG";
                i += 2;
            }
            else if(gnb[i] == 'G' and gnb[i+1] == 'B'){
                tmp += 'G';
                i++;
            }
            else{
                tmp += gnb[i];
                break;
            }
        }
        gnb = tmp;
        
    }
    pout(gnb)


    return 0;
}
