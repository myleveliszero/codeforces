#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string username, ans = "";
    cin >> username;
    for(int i=0; i < username.size(); i++){
        bool unique = true;
        for(int j=0; j < ans.size(); j++){
            if(username[i] == ans[j])
                unique = false;
        }

        if (unique){
            ans += username[i];
        }
    }
    if (ans.size() % 2 == 0){
        cout << "CHAT WITH HER!" << "\n";
    }
    else{
        cout << "IGNORE HIM!" << "\n";
    }

    return 0;
}