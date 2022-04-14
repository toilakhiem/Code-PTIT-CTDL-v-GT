#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> stk;
    string s;
    int n;
    while(1){
        cin >> s;
        if(s=="push"){
            cin >> n;
            stk.push(n);
        }
        else if(s=="show"){
            if(stk.empty()){
                cout << "empty" << endl;
                continue;
            }
            vector<int> v;
            while(stk.size()){
                v.push_back(stk.top());
                stk.pop();
            }
            for (int i = v.size() - 1; i >= 0;i--){
                cout << v[i] << " ";
                stk.push(v[i]);
            }
            cout << endl;
        }
        else if(s=="pop"){
            stk.pop();
        }
    }
    return 0;
}