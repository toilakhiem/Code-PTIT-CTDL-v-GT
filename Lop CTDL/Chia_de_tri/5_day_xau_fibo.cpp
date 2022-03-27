#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll N, k, dp[93];
// char res(ll n, ll i){
//     while(n>2){
//         if(i<=dp[n-2])
//             n -= 2;
//         else{
//             i -= dp[n - 2];
//             n -= 1;
//         }
//     }
//     if(n==1)
//         return 'A';
//     else
//         return 'B';
// }
char fibo(ll n, ll i){
    if(n==1)
        return 'A';
    if(n==2)
        return 'B';
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
/*
char fibo(ll n, ll i){
    if(i==1)
        return 'A';
    if(i==2)
        return 'B';
    if(i<=dp[n-2])
        return fibo(n - 2, i);
    else
        return fibo(n - 1, i - dp[n - 2]);
}
*/
// A B AB BAB ABBAB BABABBAB 