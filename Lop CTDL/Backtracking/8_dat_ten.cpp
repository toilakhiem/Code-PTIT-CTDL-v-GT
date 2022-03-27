#include<bits/stdc++.h>
using namespace std;
int n, k, C[30];
vector<string> v;
map<string, int> m;
void Try(int i){
    for (int j = C[i - 1] + 1; j <= n - k + i;j++){
        C[i] = j;
        if(i==k){
            for (int x = 1; x <= k;x++){
                cout << v[C[x]-1] << " ";
            }cout << endl;
        }else
            Try(i + 1);
    }
}
void testcase(){
    string s;
    cin >> n >> k;
    for (int i = 0; i < n;i++){
        cin >> s;
        m[s]++;
    }
    for(auto i:m)
        v.push_back(i.first);
    n = v.size();
    sort(v.begin(), v.end());
    C[0] = 0;
    Try(1);
}
int main(){
    int x = 1;
    while(x--)
        testcase();
}