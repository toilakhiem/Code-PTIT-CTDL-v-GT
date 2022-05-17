#include<bits/stdc++.h>
using namespace std;
string s;
set<string> kq;
void ql(int pos,stack<char> st,string res){
	if(s[pos]=='('){
		res+='(';
		st.push('(');
		if(pos < s.size()-1) ql(pos+1,st,res);
		res.pop_back();
		st.pop();    //bo qua ngoac do
		if(pos<s.size()-1) ql(pos+1,st,res);
		else if(pos == s.size()-1 && st.size()==0 && res.size()>1) kq.insert(res);
	}
	else if(s[pos]==')'){
		if(st.size()>0){
			st.pop();
			res+=')';
			if(pos<s.size()-1) ql(pos+1,st,res);
			else if(pos==s.size()-1 && st.size()==0 && res.size()>1) kq.insert(res);
			st.push('(');  // bo qua dau ngoac do duyet cai tiep theo
			res.pop_back();
			if(pos<s.size()-1) ql(pos+1,st,res);
		}
		else{
			if(pos<s.size()-1) ql(pos+1,st,res);
			else if(pos==s.size()-1 && st.size()==0 && res.size()>1) kq.insert(res);
		}
	}
	else {
		res+=s[pos];
		if(pos<s.size()-1) ql(pos+1,st,res);
		else if(pos==s.size()-1 && st.size()==0 && res.size()>1) kq.insert(res);
		res.pop_back();
	}
}
void solve(){
    cin>>s;
	stack<char> st; // de kiem tra dau ngoac dung hay khong
	ql(0,st,"");
	if(kq.size()==0){
		cout<<-1<<endl;
		return;
	}
	int m=-1;
	for(auto x:kq){
		int sz=x.length();
		m=max(m,sz);
	}
	for(auto x:kq){
		if(x.length()==m){
			cout<<x<<" ";
		}
	}
	cout<<endl;
	kq.clear();
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}