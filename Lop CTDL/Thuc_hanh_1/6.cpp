#include<bits/stdc++.h>
using namespace std;
int n, k;
vector<string> res, v;
char c, key = '*';
bool check(string s){
    int demx = 0, demy = 0;
    for (int i = 0; i < s.size();i++){
        int dem1 = 0;
        if(s[i] == 'X') {
            int j = i;
            while(s[j] == 'X'){
                dem1++;
                j++;
            }
            demx = max(demx, dem1);
            i += j - i;
        }
    }
    for (int i = 0; i < s.size();i++){
        int dem2 = 0;
        if(s[i] == 'O') {
            int j = i;
            while(s[j] == 'O'){
                dem2++;
                j++;
            }
            i += j - i;
            demy = max(demy, dem2);
        }
    }
        if (c == 'X' && demx > demy)
            return true;
        if(c=='O' && demy > demx)
            return true;
    return false;
}
void Try(string s, bool used){
    if(s.size() == k + 1 ){
        if(s.find(key) != string::npos)
            res.push_back(s);
        return;
    }
        if(!used){
            used = 1;
            Try(s + key,used);
            used = 0;
        }
        Try(s + 'X',used);
        Try(s + 'O',used);
}
void testcase(){
    set<string> st;
    cin >> n >> c;
    k = n - 5;
    Try("",false);
    for(auto i:res){
        string s;
        for (int j = 0; j < i.size();j++){
            if(i[j] == '*')
                for (int x = 0; x < 5;x++)
                    s += c;
            else
                s += i[j];
        }
        st.insert(s);
    }
    for(auto i:st){
        if(check(i))
            cout << i << endl;
    }
}
int main(){
    int x;
    cin >> x;
    while (x--)
    {
        res.clear();
        testcase();
    }
    
}

