#include<bits/stdc++.h>
using namespace std;
int n, k, s = 0, a[100], res = 0;
void Try(int x, int sum, int dem){
    for (int i = x; i < n;i++){
        sum += a[i];
        if(sum == s) {
            if(dem==k-1 && i==n-1)
                res++;
            Try(i + 1, 0, dem + 1);
        }
    }
}
int main(){
    cin >> n >> k;
    for (int i = 0; i < n;i++){
        cin >> a[i];
        s += a[i];
    }
    if(s%k!=0) {
        cout << 0;
        return 0;
    }
    s /= k;
    Try(0, 0, 0);
    cout << res;
}