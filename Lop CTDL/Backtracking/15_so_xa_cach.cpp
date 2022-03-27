/*
Cho số nguyên dương N (2 < N <10). Một số nguyên dương K có N chữ số được gọi là số xa cách nếu thỏa mãn:

K không chứa chữ số 0
Tất cả các chữ số từ 1 đến N đều xuất hiện trong K đúng 1 lần
Không có hai chữ số liên tiếp nào trong K có hiệu bằng 1.
Hãy liệt kê tất cả các số thỏa mãn theo thứ tự tăng dần.
Input:
2
3
4

Output:
trống
2413
3142
*/

#include <bits/stdc++.h>
using namespace std;
int n, a[15];
bool c[100];
void out(){
    for (int i = 1;i<=n;i++){
        cout << a[i];
    }
    cout << endl;
}
bool check(){
    long long sum = 0;
    for (int i = 1; i < n;i++){
        if(abs(a[i] - a[i+1]) == 1)
            return false;
    }
    return true;
}
void Try(int i){
    for (int j = 1; j <= n;j++){
        if(!c[j]){
            c[j] = true;
            a[i] = j;
            if(i==n){
                if(check())
                    out();
            }else
                Try(i + 1);
            c[j] = false;
        }
    }
}
void testcase()
{
    cin >> n;
    Try(1);
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}