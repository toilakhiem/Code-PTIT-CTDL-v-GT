#include<bits/stdc++.h>
using namespace std;
int n, a[20][20], b[20], res = 10000000, used[20];
void Try(int index,int sum){
    for (int i = 1; i < n;i++){
        if(sum > res)
            return;
        if(!used[i]){
            used[i] = 1;
            b[index] = i;
            sum += a[b[index - 1]][b[index]];
            if(index==n-1){
                sum += a[b[index]][b[index+1]];
                res = min(res, sum);
                sum -= a[b[index - 1]][b[index]];
            }else
                Try(index + 1,sum);
            used[i] = 0;
            sum -= a[b[index - 1]][b[index]];
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++)
            cin >> a[i][j];
    }
    b[0] = 0;
    b[n] = 0;
    Try(1,0);
    cout << res;
}