#include<bits/stdc++.h>
using namespace std;
int k, n;
char a[20], c;
vector<vector<int>> res;
vector<int> v;
void Try(int i){
    for (int j = i; j <= n;j++){
        // if(v.size()==0 || v[v.size()-1] <= j)
        if(j < i)
            return;
         v.push_back(j);
        if(v.size()==k){
            res.push_back(v);
        }
        else
            Try(j);
        v.pop_back();
    }
}
int main(){
    cin >> c >> k;
    n = c - 'A' + 1;
    Try(1);
    for(auto i:res) {
        for(int j:i){
            char c = j + 64;
            cout << c;
        }
        cout << endl;
    } 
}