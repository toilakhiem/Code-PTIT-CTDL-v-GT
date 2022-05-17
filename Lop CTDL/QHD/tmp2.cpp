#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
    	int n,m; cin>>n>>m;
    	int a[n+1][m+1]={0},d[n+1][m+1];
    	for(int i=1;i<=n;i++){
    		for(int j=1;j<=m;j++){
    			cin>>a[i][j];
    			d[i][j]=a[i][j];
			}
		}
		int res=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i][j]==1){ 
		 		   d[i][j]=min(d[i-1][j-1],min(d[i-1][j],d[i][j-1]))+1;
			    }
			    else d[i][j]=0;
				res=max(res,d[i][j]);
			}
		}
		cout<<res<<endl;
	}
}