#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    unordered_map<ll, ll> m;
    for(ll &i:arr){
        cin >> i;
    }
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        if (m.find(k - arr[i]) != m.end())
        {
            count += m[k - arr[i]];
        }
        m[arr[i]]++;
    }
    cout << count << endl;
}
int main(){
    int n;
    cin >> n;
    while(n--)
        testcase();
}