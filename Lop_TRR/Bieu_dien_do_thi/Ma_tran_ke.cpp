#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100];
    // ds cạnh sang ma trận kề
    int m, n; // m đỉnh, n cạnh 
    // cin >> m >> n;
    // for (int i = 0; i < n;i++){
    //     int x, y;
    //     cin >> x >> y;
    //     a[x][y] = a[y][x] = 1;
    // }
    // for (int i = 1; i <= m;i++){
    //     for (int j = 1; j <= m;j++){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    // ds kề sang ma trận kề
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

