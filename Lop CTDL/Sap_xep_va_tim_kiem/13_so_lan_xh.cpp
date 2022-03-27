#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n, k, dem = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (int &i : v){
        cin >> i;
        if(i==k)
            dem++;
    }
    dem = (dem>0) ? dem : -1;
    cout << dem << endl;
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        TestCase();
}