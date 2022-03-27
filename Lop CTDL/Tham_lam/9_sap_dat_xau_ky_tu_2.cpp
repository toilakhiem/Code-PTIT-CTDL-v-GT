#include <bits/stdc++.h>
using namespace std;
void testcase(){
    int k;
    string s;
    cin >> k >> s;
    int n = s.size();
    int ok = 0;
    map<char, int> m;
    for (int i = 0; i < n;i++)
        m[s[i]]++;
    int max_tmp = 0;
    for(auto i:m)
        max_tmp = max(max_tmp, i.second);
    int res = ((max_tmp - 1) * k + 1 > s.size()) ? -1 : 1;
    cout << res << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}

