#include<bits/stdc++.h>
using namespace std;
void testcase(){
    int n;
    cin >> n;
    vector<bool> v(n, true);
    v[0] = false, v[1] = false;
    for (int i = 2; i < sqrt(n);i++){
        if(v[i]){
            for (int j = i * i; j <= n;j+=i){
                v[j] = false;
            }
        }
    }
    vector<int> res;
    for (int i = 2; i <= n;i++){
        if(v[i])
            res.push_back(i);
    }
    bool ok = false;
    for (int i = 0; i < res.size();i++){
        if(binary_search(res.begin(),res.end(),n-res[i])){
            cout << res[i] << " " << n - res[i];
            ok = true;
            break;
        }
    }
    if(!ok)
        cout << "-1";
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    while(x--)
        testcase();
}