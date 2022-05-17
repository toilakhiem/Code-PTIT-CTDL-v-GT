#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<string> res;
int n;
void sinh(string s){
    if(s.size()>n)
        return;
    if(s.size() >=4){
        bool used[10] = {0};
        for (int i = 0; i < s.size();i++){
            used[s[i] - '0'] = 1;
        }
        if(used[2] && used[3] && used[5] && used[7] && s[s.size()-1] != '2')
            res.push_back(s);
    }
    sinh(s + "2");
    sinh(s + "3");
    sinh(s + "5");
    sinh(s + "7");
}
void testcase(){
    cin >> n;
    sinh("");
    for(string i:res)
        cout << i << endl;
}
int main()
{
    int x = 1;
    while (x--)
        testcase();
}

