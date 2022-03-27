#include<bits/stdc++.h>
using namespace std;
int n;
void testcase(){
    cin >> n;
    int so4 = 0, so7 = 0;
    for (int i = 0; i <= n / 4;i++){
        int j = (n - i * 4)/7;
        if(i*4+j*7==n){
            so4 = i;
            so7 = j;
            break;
        }
    }
    if(so4==0 && so7==0)
        cout << -1 << endl;
    else{
        for (int i = 0; i < so4;i++)
            cout << 4;
        for (int i = 0; i < so7;i++)
            cout << 7;
        cout << endl;
    }
}
int main(){
    int x;
    cin >> x;
    while(x--){
        testcase();
    }
}