#include<bits/stdc++.h>
using namespace std;
void ketqua(string s){
    stack<char> st;
    // duyet xau
		for(int i=0;i<s.length();i++){
            // neu la ] thi duyet den khi nao gap [
			if(s[i]==']'){
				string x;
				while(!st.empty() && st.top()!='['){
					x=st.top()+x; 
					st.pop();
				}
				st.pop();
                // lay so truoc ngoac
				string number="";
				while(!st.empty() && st.top()>='0' && st.top()<='9'){
					number=st.top()+number; st.pop();
				}
				int n=1;
				string a="";
				if(number.size()) n=stoi(number);
				for(int i=0;i<n;i++){
					a+=x;
				}
                // sau do push lai stack
				for(int i=0;i<a.length();i++){
					st.push(a[i]);
				}
			}
			else st.push(s[i]);
		}
		string res="";
		while(!st.empty()){
			res=st.top()+res;
			st.pop();
		}
        cout << res << endl;
}
void testcase(){
    string s; cin>>s;
    ketqua(s);
}
int main(){
	int t; cin>>t;
	while(t--){
        testcase();
    }
}