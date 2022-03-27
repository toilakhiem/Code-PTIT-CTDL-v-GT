#include<bits/stdc++.h>
using namespace std;
int n, j;
vector<int> a, b;
void testcase()
{
    a.clear();
    b.clear();
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> j;
        a.push_back(j);
    }
    b = a;
    sort(b.begin(), b.end());
    int res = 0;
    for (int i = 0; i < n;i++){
        if(a[i] != b[i])
            for (int j = i + 1; j < n;j++){
                if(a[j] == b[i]) {
                    res++;
                    swap(a[i], a[j]);
                    break;
                }
            }
    }
    cout << res << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}