#include <bits/stdc++.h>
using namespace std;
void testcase(){
    int n, s, m;
    cin >> n >> s >> m;
    int ok = 1;
    int lt = m * s,sum = 0, dem = 0;
    for (int i = 1; i <= s;i++){
        if(i%7!=0){
            dem++;
            sum += n;
            if(sum >= lt){
                cout << dem << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}

