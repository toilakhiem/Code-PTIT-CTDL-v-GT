#include<bits/stdc++.h>
using namespace std;
int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
void testcase(){
    int n, i = 9, res = 0;
    cin >> n;
    while(n > 0){
        if(n/a[i] > 0){
            res += n / a[i];
            n %= a[i];
        }else
            i--;
    }
    cout << res << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}