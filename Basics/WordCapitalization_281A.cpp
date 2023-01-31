#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    char letter;
    getline(cin, word);
    word[0] = toupper(word[0]);
    cout << word << endl;

}