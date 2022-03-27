#include<bits/stdc++.h>
using namespace std;
void testcase(){
    int m, n;
    cin >> m >> n;
    int a[m + 1][n + 1];
    for (int i = 0; i < m;i++) {
        for (int j = 0; j < n;j++)
            cin >> a[i][j];
    }
    int res[m][n];
    for (int i = 0; i < m;i++){
        for (int j = 0; j < n;j++){
            if(i==0 || j==0)
                res[i][j] = 1;
            else
                res[i][j] = res[i - 1][j] + res[i][j - 1];
        }
    }
    cout << res[m - 1][n - 1] << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x;
    cin >> x;
    while (x--)
    {
        /* code */
        testcase();
    }
    
}