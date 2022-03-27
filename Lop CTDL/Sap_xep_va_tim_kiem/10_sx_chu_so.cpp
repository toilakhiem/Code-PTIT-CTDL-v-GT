#include<bits/stdc++.h>
using namespace std;
void testcase(){
    int n;
    cin >> n;
    map<int, int> m;
    vector<int> res;
    string s;
    for (int i = 0; i < n;i++){
        cin >> s;
        for (int i = 0; i < s.size();i++){
            m[s[i]-'0']++;
        }
    }
    for(auto i:m) {
        res.push_back(i.first);
    }
    sort(res.begin(), res.end());
    for(int i:res)
        cout << i << " ";
    cout << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}