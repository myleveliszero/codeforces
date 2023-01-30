#include <iostream>

using namespace std;

int main()
{
    int N, petya, vasya, tonya, ans =0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> petya;
        cin >> vasya;
        cin >> tonya;
        if (petya+vasya+tonya > 1)
            ans +=1;
        
    }
    cout << ans << endl;
    return 0;
}