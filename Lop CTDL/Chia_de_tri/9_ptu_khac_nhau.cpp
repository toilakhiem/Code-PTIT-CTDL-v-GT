#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			cin>>b[i];
		}
		int i=0;
		while(i<n){
			if(a[i]!=b[i]) break;
			i++;
		}
		cout<<i+1<<endl;
	}
}