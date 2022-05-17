#include<bits/stdc++.h>
using namespace std;
map<int, int> m;
int a[1000], n;
vector<int> mangdau;
vector<string> ress;
unordered_map<string, bool> m2;
string s;
void layvidtridaungoac(string s){
    stack<int> stk;
    for (int i = 0; i < s.size();i++){
        if(s[i]=='(')
            stk.push(i);
        else if(s[i]==')'){
            m[stk.top()] = i;
            mangdau.push_back(stk.top());
            stk.pop();
        }
    }
}
void print(){
    bool used[1000] = {0};
    memset(used, false, sizeof(used));
    for (int i = 0; i < n;i++){
        if(a[i]){
            used[mangdau[i]] = 1;
            used[m[mangdau[i]]] = 1;
        }
    }
    string tmp;
    for (int i = 0; i < s.size(); i++){
        if(!used[i])
            tmp += s[i];
    }
    if(!m2[tmp]){
        m2[tmp] = 1;
        ress.push_back(tmp);
    }
}
void Try(int x){
    for (int i = 0; i <= 1;i++){
        a[x] = i;
        if(x==n-1){
            print();
        }else
            Try(x + 1);
    }
}
void testcase(){
    cin >> s;
    layvidtridaungoac(s);
    n = mangdau.size();
    Try(0);
    sort(ress.begin(), ress.end());
    for (int i = 1; i < ress.size();i++)
        cout << ress[i] << endl;
}
int main(){
    int x = 1;
    while(x--){
        testcase();
    }
} 