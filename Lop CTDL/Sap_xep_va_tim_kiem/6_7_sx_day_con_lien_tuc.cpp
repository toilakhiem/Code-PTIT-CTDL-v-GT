#include<bits/stdc++.h>
using namespace std;
int n, j;
vector<int> a, b;
void testcase()
{
    a.clear();
    b.clear();
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> j;
        a.push_back(j);
    }
    b = a;
    sort(b.begin(), b.end());
    int l = 0, r = n - 1;
    while(a[l] == b[l] )
        l++;
    while (a[r] == b[r])
        r--;
    cout << l+1 << " " << r+1;
    cout << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}