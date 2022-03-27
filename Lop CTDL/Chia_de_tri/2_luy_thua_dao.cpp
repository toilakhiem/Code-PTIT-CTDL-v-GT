#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;
ll Pow(ll n, ll k){
    if(n==0)
        return 1;
    if(k==1)
        return n%mod;
    ll x = Pow(n, k / 2);
    if(k%2==0)
        return x * x % mod;
    else return x * x % mod * n % mod;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        ll a, b=0, c;
        cin >> a;
        c = a;
        while(c){
            b = b * 10 + c % 10;
            c /= 10;
        }
        cout << Pow(a, b) << endl;
    }
}