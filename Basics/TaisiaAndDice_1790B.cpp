#include <iostream>
#include <string>

using namespace std;

int main()
{  
    int T;
    cin >> T;
    int n,s,r, maxvalue;
    for(int i=0; i < T; i++){
        cin >> n >> s >> r;
        cout << s-r << ' ';
        int add = r / (n-1);
        int rmr = r % (n-1);
        for(int j = 0; j < n-1; j++){
            if (rmr){
                cout << add + 1 << " ";
                --rmr;
            }
            else
                cout << add << " ";
        }
        cout << endl;
    }
    return 0;
}