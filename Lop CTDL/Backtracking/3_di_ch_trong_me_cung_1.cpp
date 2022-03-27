/*
Cho một mê cung bao gồm các khối được biểu diễn như một ma trận nhị phân A[N][N].
Một con chuột đi từ ô đầu tiên góc trái (A[0][0]) đến ô cuối cùng góc phải (A[N-1][N-1]) theo nguyên tắc:

Down (D): Chuột được phép xuống dưới nếu ô dưới nó có giá trị 1.
Right (R): Chuột được phép sang phải dưới nếu ô bên phải nó có giá trị 1.
Hãy đưa ra một hành trình của con chuột trên mê cung. Đưa ra -1 nếu chuột không thể đi đến đích.
Input:
2
4
1  0  0  0
1  1  0  1
0  1  0  0
1  1  1  1
5
1 0 0 0 0
1 1 1 1 1
1 1 0 0 1
0 1 1 1 1
0 0 0 1 1
Output:
DRDDRR
DDRDRRDR DDRDRRRD DRDDRRDR DRDDRRRD DRRRRDDD
*/
#include <bits/stdc++.h>
using namespace std;
int a[100][100], n;
vector<string> res;
bool check;
void init()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    res.clear();
    check = false;
}
void Try(int i, int j, string s)
{
    if (i == 1 && j == 1 && a[i][j] == 0)
    {
        check = false;
        return;
    }
    if (i == n && j == n && a[n][n])
    {
        res.push_back(s);
        check = true;
        return;
    }
    if (i < n && a[i + 1][j])
    {
        Try(i + 1, j, s + "D");
    }
    if (j < n && a[i][j + 1])
    {
        Try(i, j + 1, s + "R");
    }
    if ((i < n && j < n && !a[i + 1][j] && !a[i][j + 1]) || i > n || j > n)
        return;
}
void testcase()
{
    cin >> n;
    init();
    Try(1, 1, "");
    if (!check)
        cout << "-1";
    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        testcase();
    }
}
