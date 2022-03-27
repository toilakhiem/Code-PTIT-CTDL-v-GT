#include <bits/stdc++.h>
using namespace std;
void testcase()
{
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int, int> m;
    for(int &i:v){
        cin >> i;
        m[i]++;
    }
    n = n / 2;
    bool check = false;
    int max = 0;
    for(auto i:m){
        if(i.second > n && i.second > max)
            max = i.first;
    }
    if(max!=0)
        cout << max;
    else
        cout << " NO";
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}
