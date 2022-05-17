#include<bits/stdc++.h>
using namespace std;
void testcase(){
    int m, n, ans = 0;
    cin >> m >> n;
    int a[m + 1][n + 1] = {0}, b[m + 1][n + 1] = {0};
    for (int i = 1; i <= m;i++){
        for (int j = 1; j <= n;j++){
            cin >> a[i][j];
            b[i][j] = 0;
        }
    }
    for (int i = 1; i <= m;i++){
        for (int j = 1; j <= n;j++){
            if(a[i][j]==1) {
                b[i][j] = min(b[i-1][j-1], min(b[i-1][j], b[i][j-1]))+1;
                ans = max(ans,b[i][j]);
            }else
                b[i][j] = 0;
        }
    }
    cout << ans << endl;
}
int main(){
	int t; cin>>t;
	while(t--){
        testcase();
    }
}