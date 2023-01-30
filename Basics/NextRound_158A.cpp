#include <iostream>
 
using namespace std;
 
 
int main()
{
    int n, k, cur;
    cin >> n >> k >> cur;
    if (cur == 0)
        cout << 0 << endl;
    else
    {
        for(int i = 1; i < k; i++)
        {
            cin >> cur;
            if (cur == 0)
            {
                cout << i << endl;
                return 0;
            }
        }
            
        
        int next = cur;
        
        while (cin >> next)
        {
            if (next == cur)
                k += 1;
            else
                break;
        }
        
        cout << k << endl;
    }
}