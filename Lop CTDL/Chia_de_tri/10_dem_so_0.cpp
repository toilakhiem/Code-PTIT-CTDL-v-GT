#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, j;
    cin >> x;
    while(x--){
        int dem = 0, n;
        cin >> n;
        for (int i = 0; i < n;i++){
            cin >> j;
            if(j==0)
                dem++;
        }
        cout << dem << endl;
    }
}