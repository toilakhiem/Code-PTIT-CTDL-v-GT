#include<bits/stdc++.h>
using namespace std;
void testcase(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &i : v)
        cin >> i;
    int l = 0, h = n - 1;
    if (k < v[l] || k > v[h])
    {
        cout << "-1" << endl;
        return;
    }
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if(v[mid] == k) {
            cout << "1" << endl;
            return;
        }
        if(v[mid] > k)
            h = mid - 1;
        if(v[mid] < k)
            l = mid + 1;
    }
    cout << "-1" << endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x;
    cin >> x;
    while(x--){
        testcase();
    }
}