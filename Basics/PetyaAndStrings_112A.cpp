#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string first, second;
    getline(cin, first);
    getline(cin, second);
    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);
    if (first == second)
        cout << 0 << endl;
    else if (first > second)
        cout << 1 << endl;
    else
        cout << -1 << endl;

    return 0;
}