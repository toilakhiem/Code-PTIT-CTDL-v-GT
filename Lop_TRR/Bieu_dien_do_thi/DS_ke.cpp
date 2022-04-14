#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ds cạnh sang ma trận kề
    // int m, n;
    // cin >> m >> n;
    // int a[1000][1000];
    // for (int i = 0; i < n;i++){
    //         int x, y;
    //         cin >> x >> y;
    //         a[x][y] = a[y][x] = 1;
    // }
    // for (int i = 1; i <= m;i++){
    //     for (int j = 1; j <= m;j++){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    // danh sach canh >> danh sách kề
    // vector<int> v[1000];
    // for (int i = 0; i < n;i++){
    //         int x, y;
    //         cin >> x >> y;
    //         v[x].push_back(y);
    //         v[y].push_back(x);
    // }
    // for (int i = 1; i <= m;i++){
    //     cout << i << ": ";
    //     for (int j = 0; j < v[i].size();j++){
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    // ma tran ke >> danh sach canh
    int n, a[100][100];
    vector<pair<int, int>> p;
    cin >> n;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++)
            cin >> a[i][j];
    }

    for (int i = 1; i <= n;i++){
        for (int j = i; j <= n;j++)
            if(a[i][j])
                p.push_back({i, j});
    }
    for(auto i:p){
        cout << i.first << " " << i.second << endl;
    }
}

