#include<bits/stdc++.h>
using namespace std;
int n, j;
vector<int> v;
void testcase(){
    cin >> n;
    v.clear();
    for (int i = 0; i < n;i++){
        cin >> j;
        v.push_back(j);
    }
    cout << '[';
    for (int i = 0; i < v.size() - 1; i++)
        cout << v[i] << " ";
    cout << v[v.size() - 1] << "]" << endl;
    while(v.size() > 1){
        for (int i = 0; i < v.size();i++){
            v[i] = v[i] + v[i + 1];
        }
        v.pop_back();
        cout << '[';
        for (int i = 0; i < v.size() - 1;i++)
            cout << v[i] << " ";
        cout << v[v.size() - 1] << "]";
        cout << endl;
    }
}
int main(){
    int x;
    cin >> x;
    while(x--){
        testcase();
    }
}