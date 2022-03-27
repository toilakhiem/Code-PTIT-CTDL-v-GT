#include<bits/stdc++.h>
using namespace std;
int n, k, j;
vector<int> v, tmp;
bool used[20] = {0}, ok;
bool check(){
    int sum = 0, h = n / k, dem = 0;
    for (int i = 0; i < n;i++){
            sum += v[tmp[i]];
        if(sum==h){
            sum = 0;
            dem++;
        }
        if(sum > k)
            return false;
    }
    if(sum == 0 && dem==k)
        return true;
    return false;
}
// sinh hoan vi
void Try(int i){
    for (int j = 0; j < n;j++){
        if(ok) {
            return;
        }
        if(!used[j]){
            tmp.push_back(j);
            used[j] = true;
            if(tmp.size()==n){
                if(check)
                    ok = 1;
            }else
                Try(i + 1);
            tmp.pop_back();
            used[j] = false;
        }
    }
}
void testcase(){
    ok = 0, v.clear(), tmp.clear();
    cin >> n >> k;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> j;
        v.push_back(j);
        sum += j;
    }
    // neu k chia het return luon
    if (sum % k != 0){
        cout << 0 << endl;
        return;
    }
    Try(0);
    cout << ok << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}