#include<bits/stdc++.h>
using namespace std;
void testcase(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &i:v)
        cin >> i;
    sort(v.begin(), v.end());
    int res = 9999;
    for (int i = 0; i < n-1;i++){
        int k = v[i + 1] - v[i];
        if(k<res)
            res = k;
    }
    cout << res << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}