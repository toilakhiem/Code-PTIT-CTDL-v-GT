#include<bits/stdc++.h>
using namespace std;
int minres(string a, string b){
    string tmp1, tmp2;
    for (int i = 0; i < a.size();i++){
        if(a[i] == '6')
            tmp1 += '5';
        else
            tmp1 += a[i];
    }
    for (int i = 0; i < b.size();i++){
        if(b[i] == '6')
            tmp2 += '5';
        else
            tmp2 += b[i];
    }
    int res = stoi(tmp1) + stoi(tmp2);
    return res;
}
int maxres(string a, string b){
    string tmp1, tmp2;
    for (int i = 0; i < a.size();i++){
        if(a[i] == '5')
            tmp1 += '6';
        else
            tmp1 += a[i];
    }
    for (int i = 0; i < b.size();i++){
        if(b[i] == '5')
            tmp2 += '6';
        else
            tmp2 += b[i];
    }
    int res = stoi(tmp1) + stoi(tmp2);
    return res;
}
int main(){
    string a, b;
    cin >> a >> b;
    cout << minres(a, b) << " " << maxres(a, b);
}