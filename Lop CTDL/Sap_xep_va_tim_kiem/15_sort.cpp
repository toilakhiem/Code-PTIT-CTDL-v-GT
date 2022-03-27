#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    while(x--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int &i:v){
            cin >> i;
        }
        sort(v.begin(), v.end());
        for(int i:v)
            cout << i << " ";
        cout << endl;
    }
}