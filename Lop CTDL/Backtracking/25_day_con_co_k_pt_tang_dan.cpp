#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001],b[1001];
void inp(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	sort(b+1,b+n+1);
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void inkq(){
	for(int i=1;i<=k;i++){
		cout<<b[a[i]]<<" ";
	}
	cout<<endl;
}
void ql(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			inkq();
		}
		else ql(i+1);
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		ql(1);
		cout<<endl;
	}
}