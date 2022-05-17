#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int d[n];
		for(int i=1;i<=n;i++){
			d[i]=INT_MAX;
			for(int j=1;j<=sqrt(n);j++){
				if(i==j*j) d[i]=1;
				else if(i>j*j) d[i]=min(d[i],d[i-j*j]+1);
			}
		}
		cout<<d[n]<<endl;
        for (int i = 1; i <= n;i++)
            cout << d[i] << " ";
    }
}
// 6 
// d[1] = 1
// d[2] = 2
// d[3] = 3
// d[4] = 1
// d[5] = min(d[5-1]+1,d[5-4]+1) = 2
// d[6] = min(d[6-1]+1,d[6-4]+1)= 3
