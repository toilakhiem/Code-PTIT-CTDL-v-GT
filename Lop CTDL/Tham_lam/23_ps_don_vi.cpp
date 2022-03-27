#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		long long p,q; cin>>p>>q;
		while(1){
			if(q%p==0){
				cout<<"1/"<<q/p;
				break;
			}
			//tim phan mau dau tien lon hon p ma x%q rut gon se duoc 1 phan so dv
			long long tmp=q/p+1;
			cout<<"1/"<<tmp<<" + ";
			//tim phan so con thua
			p=p*tmp-q;
			q=q*tmp;
		}
		cout<<endl;
	}
}