#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 9;
int main(){
    int m, n, k;
    cin >> m >> n >> k;
    vector<int> a(m), b(n);
    for(int &i:a)
        cin >> i;
    for(int &i:b)
        cin >> i;
    long long res;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a[n-1] < b[n-1] || a[n-2] < b[n-2] || a[n-3] < b[n-3]){
        cout << 0;
        return 0;
    }
}