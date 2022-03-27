#include<bits/stdc++.h>
using namespace std;
bool check[201];
vector<int> snt, v;
vector<vector<int>> res;
int n, k, s;
void sang(){
    for (int i = 2; i <= 200;i++)
        check[i] = 1;
    for (int i = 2; i * i <= 200;i++){
        if(check[i]){
            for (int j = i*i; j <= 200;j+=i)
                check[j] = false;
        }
    }
    for (int i = 2; i <= 200;i++) if(check[i])
            snt.push_back(i);
}
void Try(int i, int sum, vector<int> tmp){
    if(sum == s && tmp.size() == n){
        res.push_back(tmp);
        return;
    }
    if(sum > s){
        return;
    }
    for (int j = i; j < v.size();j++){
        if(sum + v[j] <= s){
            tmp.push_back(v[j]);
            Try(j + 1, sum + v[j], tmp);
            tmp.pop_back();
        }
    }
}
void testcase(){
    v.clear(), res.clear();
    cin >> n >> k >> s;
    for (int i = 0; i < snt.size(); i++)
    {
        if(k == snt[i]){
            k = i + 1;
            break;
        }
    }
    for (int i = k; i < snt.size();i++){
        v.push_back(snt[i]);
        if(snt[i] > s)
            break;
    }
    Try(0, 0, {});
    cout << res.size() << endl;
    sort(res.begin(), res.end());
    for(auto i:res){
        for(int j:i)
            cout << j << " ";
        cout << endl;
    }
}
int main(){
    sang();
    int x;
    cin >> x;
    while(x--)
        testcase();
}