#include <bits/stdc++.h>
using namespace std;
vector<string> res;
int n;
void ql(string s,int dem){
    if(dem==n){
        res.push_back(s);
        return;
    }
    ql(s + '6', dem + 1);
    ql(s + '8', dem + 1);
}
void testcase()
{
    cin >> n;
    res.clear();
    ql("", 0);
    cout << res.size() << endl;
    for(string i:res)
        cout << i << " ";
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}

