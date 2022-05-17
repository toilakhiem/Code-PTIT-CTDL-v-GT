#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> somayman;
void sinh(ll value, ll so7, ll so4)
{
    if(value > 1e9){
        return;
    }
    somayman.push_back(value);
    sinh(value * 10LL + 4, so7, so4+1);
    sinh(value * 10LL + 7, so7 + 1, so4); 
}
int main(){
    sinh(0, 0, 0);
    sort(somayman.begin(), somayman.end());
    ll a, b;
    cin >> a >> b;
    ll res = 0;
    auto k = lower_bound(somayman.begin(), somayman.end(), a);
    for (ll i = a; i <= b;i++){
        if(i<=*k)
            res += *k;
        if(i>*k){
            *(k++);
            res += *k;
        }
    }
    cout << res << endl;
}