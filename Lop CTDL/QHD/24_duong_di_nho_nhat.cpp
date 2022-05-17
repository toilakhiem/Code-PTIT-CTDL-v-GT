#include <bits/stdc++.h>
using namespace std;
int m, n;
int a[500][500];
void ketqua(){
    int b[500][500];
    for (int i = 0; i < m;i++){
        for (int j = 0; j < n;j++){
            if(i== 0 && j == 0)
                b[i][j] = a[i][j];
            else if(i==0)
                b[i][j] = b[i][j-1] + a[i][j];
            else if(j==0)
                b[i][j] = b[i-1][j] + a[i][j];
            else
                b[i][j] = a[i][j] + min(b[i - 1][j], min(b[i][j - 1], b[i - 1][j - 1]));
        }
    }
    cout << b[m - 1][n - 1] << endl;
}
void testcase(){
    cin >> m >> n;
    for (int i = 0; i < m;i++) {
        for (int j = 0; j < n;j++)
            cin >> a[i][j];
    }
    ketqua();
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}