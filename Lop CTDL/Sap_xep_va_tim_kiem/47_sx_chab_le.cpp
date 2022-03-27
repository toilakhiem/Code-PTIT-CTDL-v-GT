#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    return a > b;
}
void testcase()
{
    int n, j;
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n;i++){
        cin >> j;
        if(i%2==0)
            a.push_back(j);
        else
            b.push_back(j);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(),cmp);
    for (int i = 0; i < b.size();i++){
        cout << a[i] << " " << b[i] << " ";
    }
    if(a.size() > b.size())
        cout << a[a.size() - 1];
}
int main()
{
    int x = 1;
    while (x--)
    {
        testcase();
    }
}