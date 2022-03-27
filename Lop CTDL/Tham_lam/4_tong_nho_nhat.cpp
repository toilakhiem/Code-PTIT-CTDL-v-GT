#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    while(x--){
        int a[100], n;
        cin >> n;
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        sort(a, a + n);
        string s1, s2;
        for (int i = 0; i < n;i++){
            if(i%2==0) s1 += a[i] + '0';
            else s2 += a[i] + '0';
        }
        cout << stoll(s1) + stoll(s2) << endl;
    }
}