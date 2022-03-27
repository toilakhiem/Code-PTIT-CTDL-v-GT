#include<bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> v;
vector<vector<char>> x;
vector<int> tmp;
vector<char> tmp2;
void quaylui1(int i){
    for (int j = 1; j <= n;j++){
        tmp.push_back(j);
        if(tmp.size() == n)
            v.push_back(tmp);
            else
                quaylui1(i+1);
            tmp.pop_back();
    }
}
bool used[20];
void quaylui2(int i){
    for (int j = 1; j <= n;j++){
        if(!used[j]){
            used[j] = 1;
            tmp2.push_back(j + 64);
            if (tmp2.size() == n)
                x.push_back(tmp2);
            else
                quaylui2(i+1);
            tmp2.pop_back();
            used[j] = 0;
        }
    }
}
int main(){
    cin >> n;
    quaylui1(1);
    quaylui2(1);
    for(auto i:x) {
        string s;
        for(char j:i)
            s += j;
            for(auto k:v){
                cout << s;
                for(int l:k)
                    cout << l;
            cout << endl;
        }
    }
}