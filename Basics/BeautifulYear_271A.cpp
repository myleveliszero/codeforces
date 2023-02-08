#include <bits/stdc++.h>
using namespace std;

#define YES cout << "YES" << "\n";
#define NO cout << "NO" << "\n";
#define pout(x) cout << x << "\n";


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int year;
    cin >> year;
    
    int d1,d2,d3,d4;
    bool isbeautiful = false;
    year++;
    while (!isbeautiful){
        d1 = year %10;
        d2 = (year/10)%10;
        d3 = (year/100)%10;
        d4 = (year/1000);

        if (d1 != d2 and d1 != d3 and d1 != d4 and 
            d2 != d3 and d2 != d4 and d3 != d4){
            pout(year)
            return 0;
        }

        year++;
    }
    
    return 0;
}