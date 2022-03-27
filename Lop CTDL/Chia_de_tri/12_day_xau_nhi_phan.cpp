#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll N, k, dp[93];
char fibo(ll n, ll i){
    if(n==1)
        return '0';
    if(n==2)
        return '1';
    if(i<=dp[n-2])
        return fibo(n - 2, i);
    else
        return fibo(n - 1, i - dp[n - 2]);
}
void testcase(){
    cin >> N >> k;
    cout << fibo(N, k) << endl;
}
int main(){
    dp[1] = 1, dp[2] = 1;
    for (int i = 3; i <= 92;i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    int n;
    cin >> n;
    while(n--)
        testcase();
}
