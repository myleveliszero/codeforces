#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string PI = "314159265358979323846264338327";
    int T; // number of testcases;
    cin >> T;
    string curcase;
    
    for(int i = 0; i < T; i++){
        cin >> curcase;
        bool allcorrect = true;
        for(int j = 0; j < 30; j++){
            if(curcase[j] != PI[j]){
                cout << j << endl;
                allcorrect = false;
                break;
            }
                
        }
        if (allcorrect)
            cout << 30 << endl;
    } 

    return 0;
}

