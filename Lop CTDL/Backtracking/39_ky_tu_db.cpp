#include<bits/stdc++.h>
using namespace std;
long long n,m;
string s;
void inp(){
	cin>>s>>n;
	m = s.length();
	while(m<n){
		m*=2;
	}
}
 
char find(long long k,long long pow){
	if(k<=s.length()) return s[k-1];
	if(k<=pow/2)  return find(k,pow/2);
	else{
		if(k>1){
			return find(k-1-pow/2, pow/2);
		}
		else return find(1,pow/2);
	}
}
 
int main(){
	int t;cin>>t;
	while(t--){
		inp();
		cout<<find(n,m)<<endl;
	}
}   