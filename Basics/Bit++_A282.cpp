#include <iostream>
 
using namespace std;
 
 
int main()
{
    int n, ans = 0;
    char dummy, sign;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> dummy >> sign >> dummy;
        if (sign == '+')
            ans++;
        else
            ans--;
    }
    cout << ans << endl;        
}