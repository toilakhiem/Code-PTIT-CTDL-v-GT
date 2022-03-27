#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[50000];
    long long res = 0;
    for (int i = 0; i < n;i++){
        cin >> a[i];
        res += (long long)(a[i] + abs(a[i]));
    }
    cout << res;
}