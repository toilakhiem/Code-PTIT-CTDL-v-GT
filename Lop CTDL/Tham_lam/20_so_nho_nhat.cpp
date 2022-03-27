#include <bits/stdc++.h>
using namespace std;
void testcase(){
    int n, k;
    cin >> n >> k;
    if(n > 9*k) {
        cout << -1 << endl;
        return;
    }
    n -= 1;
    string s;
    for (int i = 0; i < k;i++){
        if(n>9){
            s = '9' + s;
            n -= 9;
        }else if(n>0){
            char c = n + '0';
            s = c + s;
            n = 0;
        }else{
            s = '0' + s;
        }
    }
    if(s[0] == '0')
        s[0] = '1';
    else{
        char c = s[0];
        c++;
        s[0] = c;
    }
    cout << s << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}
