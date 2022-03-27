#include <bits/stdc++.h>
using namespace std;
using ll = long long;
char tim(ll n , ll k){
    ll x = pow(2, n - 1);
    if(k==x)
        return n + 64;
    else if(k<x)
        return tim(n - 1, k);
    else
        return tim(n - 1, k - x);
}
void testcase(){
    ll n, k;
    cin >> n >> k;
    cout << tim(n, k) << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}

