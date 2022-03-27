#include<bits/stdc++.h>
using namespace std;
string v[1000];
int n, k, used[1000] = {0}, a[1000];
vector<int> b;
int res = 100000000;
void inp(){
    cin >> n >> k;
    for (int i = 0; i < n;i++)
        cin >> v[i];
    for (int i = 0; i < k;i++)
        a[i] = i;
}
void tinh(){
    for (int i = 0; i < n;i++){
        string s;
        for (int j = 0; j < k;j++){
            s += v[i][a[j]];
        }
        int tmp = stoi(s);
        b.push_back(tmp);
    }
    sort(b.begin(), b.end());
    res = min(res, b[n - 1] - b[0]);
    b.clear();
}
void ql(int i){
    for (int j = 0; j < k;j++){
        if(!used[j]){
            a[i] = j;
            used[j] = 1;
            if (i == k - 1){
                tinh();
            }else
                ql(i + 1);
            used[j] = 0;
        }
    }
}
int main(){
    inp();
    ql(0);
    cout << res;
}