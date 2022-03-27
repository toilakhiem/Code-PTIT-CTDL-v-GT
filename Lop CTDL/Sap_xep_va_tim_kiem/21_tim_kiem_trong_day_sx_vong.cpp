#include<bits/stdc++.h>
using namespace std;
void testcase(){
    int n, k, res;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]==k)
            res = i;
    }
    cout << res + 1 << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}