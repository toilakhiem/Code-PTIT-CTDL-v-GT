#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int &i:v)
        cin >> i;
    sort(v.begin(), v.end());
    int j = n - 1;
    while(k--){
        cout << v[j--] << " ";
    }
    cout << endl;
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        TestCase();
}