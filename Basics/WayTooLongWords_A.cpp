#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{	
    int N;
    cin >> N;
    vector<string> words(N);
    string word;
    for (int i=0; i < N; i++)
    {
        cin >> word;
        const int size = word.size();
        if (size < 11)
        {
            words[i] = word;
        }
        else
        {
            words[i] = word[0] + to_string(size-2) + word[size-1]; 
        }
        cout << words[i] << endl;
    }

    return 0;
}
