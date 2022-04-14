#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[100][100];
    cin >> n;
    vector<int> v[100];
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            cin >> a[i][j];
        }
    }
     for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            if(a[i][j])
                v[i].push_back(j);
        }
    }
    for (int i = 1; i <= n;i++){
        for (int j:v[i])
            cout << j << " ";
        cout << endl;
    }
}

