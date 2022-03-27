#include<bits/stdc++.h>
using namespace std;
int n, B[1000], a[1000];
bool check[1000];
vector<vector<int>> res;
vector<int> v;
void Try(int i, int sum){
    if(check[sum]){
        vector<int> tmp = v;
        reverse(tmp.begin(), tmp.end());
        res.push_back(tmp);
    }
    for (int j = i; j < n; j++)
    {
        v.push_back(a[j]);
        Try(j + 1, sum+a[j]);
        v.pop_back();
    }
}
void sang(){
    check[0] = check[1] = 0;
    for (int i = 2; i <= 1000;i++)
        check[i] = 1;
    for (int i = 2; i * i <= 1000;i++){
        if(check[i]){
            for (int j = i*i; j <= 1000;j+=i)
                check[j] = false;
        }
    }
}
int main()
{
    
    sang();
    int x;
    cin >> x;
    while(x--){
        res.clear();
        cin >> n;
        for (int i = 0; i < n;i++)
            cin >> a[i];
        sort(a, a + n);
        Try(0,0);
        sort(res.begin(), res.end());
        for(auto i:res){
            for (int j = 0; j <i.size(); j++)
                cout << i[j] << " ";
            cout << endl;
        }
    }
}