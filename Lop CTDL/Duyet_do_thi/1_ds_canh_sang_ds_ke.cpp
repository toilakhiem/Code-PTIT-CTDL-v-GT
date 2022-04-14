#include<bits/stdc++.h>
using namespace std;
int m, n; // m đỉnh, n cạnh
void testcase(){
    vector<int> v[1000];
    cin >> m >> n;
    for (int i = 0; i < n;i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for (int i = 1; i <= m;i++){
        cout << i << ": ";
        for(int j:v[i])
            cout << j << " ";
        cout << endl;
    }
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x;
    cin >> x;
    while(x--)
        testcase();
}