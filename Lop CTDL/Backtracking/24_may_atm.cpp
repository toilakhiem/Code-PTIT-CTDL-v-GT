
#include <bits/stdc++.h>
using namespace std;
int n, s, a[100], res = 100000;
void Try(int x, int count, int sum){
    if(sum == s){
        res = min(res, count);
    }
    for (int i = x; i < n;i++){
        if(sum + a[i] <= s && count < res){
            Try(i + 1, count + 1, sum + a[i]);
        }
    }
}
void testcase(){
    cin >> n >> s;
    for (int i = 0; i < n;i++)
        cin >> a[i];
    Try(0, 0, 0);
    if(res != 100000)
        cout << res;
    else
        cout << "-1";
}
int main()
{
    int x;
    cin >> x;
    while(x--)
    testcase();
}
/*
/*
Cho dãy số A[] có n phần tử và số nguyên dương S. Hãy tìm dãy con có ít phần tử nhất của A[] có tổng các phần tử đúng bằng S.
INPUT:
10 390
200 10 20 20 50 50 50 50 100 100
OUTPUT:
5
// make by Tiến Hùng
#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

int n, ans;
long long a[30], S;
bool OK = 0;
void Try(int index, int count, long long sum)
{
    if (count >= ans || sum > S)
        return;
    if (index == n)
    {
        if (sum == S)
        {
            ans = min(ans, count);
            OK = 1;
        }
        return;
    }
    Try(index + 1, count, sum);
    Try(index + 1, count + 1, sum + a[index]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x = 1;
    while (x--)
    {
        OK = 0;
        ans = 1000;
        cin >> n >> S;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        Try(0, 0, 0);
        if (OK)
            cout << ans;
        else
            cout << -1;
        cout << endl;
    }
    return 0;
}
*/
