#include<bits/stdc++.h>
using namespace std;
void ketqua(vector<int> v, int n){
    vector<int> res(n);
    stack<int> stk;
    for (int i = 0; i < v.size();i++){
        if(!stk.size())
            stk.push(i);
        else{
            while(stk.size() && v[i] > v[stk.top()]){
                res[stk.top()] = v[i];
                stk.pop();
            }
            stk.push(i);
        }
    }
    while(stk.size()){
        int x = stk.top();
        res[stk.top()] = -1;
        stk.pop();
    }
    for(int i:res)
        cout << i << " ";
    cout << endl;
}
void testcase(){
    int n;
    cin >> n;
    vector<int> res(n);
    for (int &i:res)
        cin >> i;
    ketqua(res,n);
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}

// 4 5 2 25 8 7 6 3
// 5 25 25 -1 -1 -1 -1 -1 

// stk    
// 5 2 25  

