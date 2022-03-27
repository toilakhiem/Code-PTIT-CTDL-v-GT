#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
long long prime[10]={2,3,5,7,11,13,17,19,23,29};
ll ql(int pos, ll tich, ll dem){
    if(dem == n)
        return tich;
    ll ans = 1e18;
    for (int i = 1; i <= n;i++){
        tich *= prime[pos];
        if(tich > ans || dem*(i+1) > n)
            break;
        ans = min(ans, ql(pos + 1, tich, dem * (i + 1)));
    }
    return ans;
}
 void testcase()
{
    cin >> n;
    cout << ql(0, 1, 1) << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}