#include<bits/stdc++.h>
using namespace std;
void hangdoi(int n){
	queue<string> q;
	q.push("9");
	while(!q.empty()){
		string x=q.front(); q.pop();
		string a=x+"0";
		string b=x+"9";
		if(stoi(a)%n==0){
			cout<<a<<endl;
			return;
		}
		q.push(a);
		if(stoi(b)%n==0){
			cout<<b<<endl;
			return;
		}
		q.push(b);
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		if(9%n==0) cout<<9<<endl;
		else hangdoi(n);
	}
}