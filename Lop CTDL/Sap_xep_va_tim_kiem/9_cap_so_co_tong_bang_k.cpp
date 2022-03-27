#include <bits/stdc++.h>
using namespace std;
int n, k, j;
vector<int> a, b;
void testcase()
{
    a.clear();
    b.clear();
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> j;
        a.push_back(j);
    }
    sort(a.begin(), a.end());
    int dem = 0;
    for (int i = 0; i < n;i++){
        for(int j = i+1; j < n;j++){
            if(a[i] + a[j] == k ){
                dem++;
            }
            if(a[i] + a[j] >k)
                break;
        }
    }
    cout << dem << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}