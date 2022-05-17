#include<bits/stdc++.h>
using namespace std;
string xoa1(string s){
    string ans, res, tmp;
    for (int i = 0; i < s.size();i++){
        if(!isspace(s[i]))
            tmp += s[i];
    }
    s = tmp;
    return s;
}
string xoa2(string s){
    stack<char> st;
    stack<int> index;
    int d[300] = {0};
    for (int i = 0; i < s.size();i++){
        if(s[i] == ')'){
            int tmp = 0;
            while(st.top()!='('){
                char top = st.top();
                if(top=='+' || top=='-')
                    tmp = 1;
                st.pop();
                index.pop();
            }
            if(tmp==0){
                d[index.top()] = 1;
                d[i] = 1;
            }
            st.pop();
            index.pop();
        }else{
            st.push(s[i]);
            index.push(i);
        }
    }
    string res;
    for (int i = 0; i < s.size();i++){
        if(d[i]==0)
            res += s[i];
    }
    return res;
}
string xoa3(string s){
    stack<char> st;
    stack<int> index;
    int d[300] = {0};
    for (int i = s.size() - 1; i >= 0;i--){
        if(s[i] == '('){
            int tmp = 1;
            if(i==0 || s[i-1] != '-')
                tmp = 0;
            while(st.top() != ')'){
                st.pop();
                index.pop();
            }
            if(tmp==0){
                d[index.top()] = 1;
                d[i] = 1;
            }
            st.pop();
            index.pop();
        }else{
            st.push(s[i]);
            index.push(i);
        }
    }
    string res;
    for (int i = 0; i < s.size();i++){
        if(d[i]==0)
            res += s[i];
    }
    return res;
}
void testcase(){
    string s;
    scanf("\n");
    getline(cin, s);
    string ss = xoa1(s);
    string s2 = xoa2(ss);
    string s3 = xoa3(s2);
    cout << s3 << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}