
#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[105][105];
int dx[8]={-1,0,0,1};
int dy[8]={0,-1,1,0};
void dquy(int i,int j){
	a[i][j]='.';
	for(int k=0;k<4;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
	    if(i1>=0&&i1<n &&j1>=0&&j1<n&&a[i1][j1]=='#'){
		  dquy(i1,j1);
	 }
	}
}
int main(){
    int t = 1;
    while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int dem=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]=='#'){
					dquy(i,j);
					dem++;
				}
			}
		}
		cout<<dem<<endl;
	}
}

