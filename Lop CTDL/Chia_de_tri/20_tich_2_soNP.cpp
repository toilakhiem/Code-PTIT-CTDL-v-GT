#include<bits/stdc++.h>
using namespace std;
long long he10(string s){
	long long sum=s[s.length()-1]-'0';
	long long lt=2;
	for(int i=s.length()-2;i>=0;i--){
		sum+=(s[i]-'0')*lt;
		lt*=2;
	}
	return sum;
}
int main(){
	int t; cin>>t;
	while(t--){
		string a,b; cin>>a>>b;
		long long res=he10(a)*he10(b);
		cout<<res<<endl;
	}
}