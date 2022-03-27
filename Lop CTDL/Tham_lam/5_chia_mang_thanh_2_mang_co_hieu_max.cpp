#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    while(x--){
        int a[100], n, k;
        cin >> n >> k;
        k = min(k, n - k);
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int s1 = 0, s2 = 0;
        for (int i = 0; i < n;i++){
            if(i<k==0)
                s1 += a[i];
            else
                s2 += a[i];
        }
        cout << abs(s2-s1) << endl;
    }
}