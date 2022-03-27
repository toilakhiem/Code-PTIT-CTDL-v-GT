#include <bits/stdc++.h>
using namespace std;
void testcase()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for(int &i:v){
        cin >> i;
        sum += i;
    }
    int s = 0;
    bool check = false;
    for (int i = 0; i < n-1;i++){
        s += v[i];
        if(s == sum - s - v[i+1]){
            cout << i + 2;
            check = true;
            break;
        }
    }
    if(!check)
        cout << "-1";
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}
