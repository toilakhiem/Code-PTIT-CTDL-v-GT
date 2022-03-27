#include<bits/stdc++.h>
using namespace std;
int n, B[1000], a[1000];
vector<vector<int>> res;
vector<int> v;  
void Try(int i, int sum){
    if(sum % 2==1){
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
int main()
{
    
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