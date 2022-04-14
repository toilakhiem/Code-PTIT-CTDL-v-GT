#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> stk;
    string s;
    int n, k;
    cin >> k;
    while(k--){
        cin >> s;
        if(s=="PUSH"){
            cin >> n;
            stk.push(n);
        }
        else if(s=="PRINT"){
            if(stk.empty()){
                cout << "NONE" << endl;
                continue;
            }
            cout << stk.top();
            cout << endl;
        }
        else if(s=="POP" && !stk.empty()){
            stk.pop();
        }
    }
    return 0;
}