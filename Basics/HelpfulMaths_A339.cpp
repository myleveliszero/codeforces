#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main()
{
    int one = 0, two = 0, three = 0, plus = 0;
    char s;
    while(cin >> s)
    {
        if (s == '1')
            one++;
        else if (s == '2')
            two++;
        else if ( s == '3')
            three++;
        else
            plus++;
    }
    string ans = "";
    for (int i = 0; i < one; i++)
        {
            ans += '1';
            if (plus--)
                ans += '+';
        }

    for (int i = 0; i < two; i++)
        {
            ans += '2';
            if (plus--)
                ans += '+';
        }

    for (int i = 0; i < three; i++)
        {
            ans += '3';
            if (plus--)
                ans += '+';
        }

    cout << ans << endl;

    return 0;
}