#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ketqua(int v[], int n){
    int res[n + 10];
    for (int i = 0; i < n;i++)
        res[i] = 1;
    stack<int> stk;
    stk.push(0);
    for (int i = 1; i < n;i++){
        while(stk.size() && v[i] >= v[stk.top()]){
            stk.pop();
        }
        res[i] += (stk.empty()) ? i : i - stk.top()-1;
        stk.push(i);
    }
    for (int i = 0; i < n;i++)
        cout << res[i] << " ";
    cout << endl;
}
void testcase(){
    int n;
    cin >> n;
    int a[n + 10];
    for (int i = 0; i < n;i++)
        cin >> a[i];
    ketqua(a, n);
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}