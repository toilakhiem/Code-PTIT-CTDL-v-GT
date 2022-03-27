#include<bits/stdc++.h>
using namespace std;
void testcase(){
    int n, res = 0;
    cin >> n;
    vector<int> v(n);
    for(int &i:v)
        cin >> i;
    vector<int> tang(n), giam(n);
    tang[0] = 1;
    giam[n-1] = 1;
    for (int i = 0; i < n;i++){
        tang[i] = (v[i - 1] < v[i]) ? (tang[i - 1] + 1) : 1;
    }
    for (int i = n-2; i >= 0; i--)
    {
        giam[i] = (v[i + 1] < v[i]) ? giam[i + 1] + 1 : 1;
    }
    for (int i = 0; i < n;i++)
        res = max(res, tang[i] + giam[i] - 1);
    cout << res << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}