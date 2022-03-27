#include <bits/stdc++.h>
using namespace std;
int n;
string s;
vector<string> res;
void init(){
    cin >> n >> s;
    res.clear();
}
void Try(string tmp,int index)
{
    res.push_back(tmp);
    for (int i = index; i < n;i++){
        tmp.push_back(s[i]);
        Try(tmp, i + 1);
        tmp.pop_back();
    }
}
void testcase()
{
    init();
    Try("", 0);
    for(string i : res)
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