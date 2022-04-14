#include<bits/stdc++.h>
using namespace std;
void testcase(){
    int m, n;
    cin >> m >> n;
    vector<int> v[1000];
    for (int i = 0; i < n;i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
    }
    for (int i = 1; i <= m;i++){
        cout << i << ": ";
        for(int j:v[i])
            cout << j << " ";
        cout << endl;
    }
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