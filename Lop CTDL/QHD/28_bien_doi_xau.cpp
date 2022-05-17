#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string a,b; cin>>a>>b;
		int n=a.length(), m=b.length();
		int d[n+1][m+1];
		memset(d,0,sizeof(d));
		for(int i=0;i<=n;i++) d[i][0]=i;
		for(int i=0;i<=m;i++) d[0][i]=i;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i-1]==b[j-1]){
					d[i][j]=d[i-1][j-1];
				}
				else{
					d[i][j]=min(d[i-1][j-1],min(d[i-1][j],d[i][j-1]))+1;
				}
			}
		}
        for (int i = 1; i <= n;i++){
            for (int j = 1; j <= m;j++)
                cout << d[i][j] << " ";
            cout << endl;
        }
            cout << d[n][m] << endl;
	}
}
