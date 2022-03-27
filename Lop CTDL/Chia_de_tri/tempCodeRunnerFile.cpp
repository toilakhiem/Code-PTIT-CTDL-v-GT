#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, i, dp[93];
char res(ll n, ll i){
    if(i==1)
        return 'A';
    if(i==2)
        return 'B';
    if(i<=dp[n-2])
        return res(n - 2, i);
    else
        return res(n - 1, i - dp[n - 2]);
}
void testcase(){
    cin >> n >> i;
    cout << res(n, i) << endl;
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