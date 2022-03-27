#include<bits/stdc++.h>
using namespace std;
vector<string> res;
void sinh(string s,int n)
{
    if(s.size() == n){
        res.push_back(s);
        return;
    }
    sinh(s + "A", n);
    if(s[s.size()-1] != 'H') sinh(s + "H", n);
}
void testcase(){
    res.clear();
    int n;
    cin >> n;
    if(n==2)
        cout << "HA" << endl;
    else if(n==3){
        cout << "HAA" << endl;
    }else{
        n -= 2;
        sinh("A", n);
        sort(res.begin(), res.end());
        for(auto i:res)
            cout <<  "H" << i << "A" << endl;
    }
}
int main(){
    int n;
    cin >> n;
    while(n--){
        testcase();
    }
}