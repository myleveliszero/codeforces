#include <iostream>
 
using namespace std;
typedef long long LL;
 
int main()
{
    LL n,m,a;
    cin >> n >> m >> a;
    LL r1 = n % a, r2 = m % a;
    
    if (r1 != 0)
        r1 = 1; 
    
    if (r2 != 0)
        r2 = 1;   
    
    if (a >= n && a >= m)
        cout << 1 << endl;
    else
        cout << ((int)(n/a) + r1)*((int)(m/a)+r2) << endl;  
}