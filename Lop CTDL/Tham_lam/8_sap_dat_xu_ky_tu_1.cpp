#include <bits/stdc++.h>
using namespace std;
void testcase(){
    string s;
    cin >> s;
    int n = s.size();
    int ok = 0;
    map<char, int> m;
    for (int i = 0; i < n;i++)
        m[s[i]]++;
    int max_tmp = 0;
    for(auto i:m)
        max_tmp = max(max_tmp, i.second);
    if(n%2==0) {
        if(max_tmp > n/2)
            ok = 1;
    }else {
        if(max_tmp > n/2 + 1)
            ok = 1;
    }
    int res = (ok==1) ? -1 : 1;
    cout << res << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}

