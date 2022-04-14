#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000][1000], m, n;
    cin >> n;
    scanf("\n");
    for (int i = 1; i <= n;i++){
        string s, num;
        getline(cin, s);
        stringstream ss(s);
        while(ss>>num){
            a[i][stoi(num)] = 1;
        }
    }
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

