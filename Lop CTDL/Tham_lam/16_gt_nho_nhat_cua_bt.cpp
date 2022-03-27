#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(ll &i:a)
        cin >> i;
    for (ll &i : b)
        cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long sum = 0;
    for (int i = 0; i < n;i++){
        sum += a[i] * b[n - i - 1];
    }
    cout << sum << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}           