#include<bits/stdc++.h>
using namespace std;
void testcase(){
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    int d[n+5]={0};
    d[1] = x;
    for (int i = 2; i <= n; i++)
    {
        if(i%2==0)
            d[i] = min(d[i - 1] + x, d[i / 2] + z);
        else
            d[i] = min(d[i - 1] + x, d[(i + 1) / 2] + y + z);
    }
    cout << d[n] << endl;
}
int main(){
	int t; cin>>t;
	while(t--){
        testcase();
    }
}