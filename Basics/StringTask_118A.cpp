#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string w;
    getline(cin, w);
    transform(w.begin(), w.end(), w.begin(), ::tolower);
    string ans = "";
    for (int i = 0; i < w.size(); i++)
    {
        if (w[i]=='o' || w[i]=='a' || w[i]=='u' || w[i]=='e' || w[i]=='i' || w[i]=='y')
            continue;
        else
        {
            ans += '.';
            ans += w[i];
        }
    }
    
    cout << ans << endl;

    return 0;
}