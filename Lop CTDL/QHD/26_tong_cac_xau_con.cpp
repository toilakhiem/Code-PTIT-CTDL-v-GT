#include<bits/stdc++.h>
using namespace std;
// sumofdigit[i]  =  (i+1)*num[i] + 10*sumofdigit[i-1]
void testcase(){
    string s;
    cin >> s;
    long long res[100] = {0}, ans = 0;
    res[0] = s[0]-'0';
    ans += res[0];
    for (int i = 1; i < s.size();i++){
        long long tmp = s[i] - '0';
        res[i] = (i + 1) * tmp + 10 * res[i - 1];
        ans += res[i];
    }
    cout << ans << endl;
}
int main(){
	int t; cin>>t;
	while(t--){
        testcase();
    }
}