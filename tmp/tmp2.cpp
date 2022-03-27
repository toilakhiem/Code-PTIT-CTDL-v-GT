#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001],d[1001],used[1001]={0};
string b[1001];
int res;
void inp(){
	cin>>n>>k; res=1e9;
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void inkq(){
	for(int i=1;i<=n;i++){
		string res="";
		for(int j=1;j<=k;j++){
			res+=b[i][a[j]-1];
		}
		d[i]=stoi(res);
	}
	sort(d+1,d+n+1);
	int x=d[n]-d[1];
	res=min(res,x);
}
void ql(int i){
	for(int j=1;j<=k;j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
			if(i==k){
				inkq();
			}
			else ql(i+1);
			used[j]=0;
		}
	}
}
int main(){
	inp();
	ql(1);
	cout<<res<<endl;
}