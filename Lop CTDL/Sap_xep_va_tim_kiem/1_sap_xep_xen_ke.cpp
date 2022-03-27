#include<bits/stdc++.h>
using namespace std;
void testcase(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &i:v) cin >> i;
    sort(v.begin(), v.end());
    int l = 0, r = n - 1;
    while (l<r){
        cout << v[r] << " " << v[l] << " ";
        l++;
        r--;
    }
    if(l%2==1)
        cout << v[l];
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    while(n--){
        testcase();
    }
}