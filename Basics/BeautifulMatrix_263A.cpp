#include <iostream>
 
using namespace std; 
 
int main() {
 
    int isone;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> isone;
            if (isone == 1)
            {
                cout << abs(i-2)+abs(j-2) << endl;
                return 0;
            }
        }
    }
    return 1;
}