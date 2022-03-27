
#include <bits/stdc++.h>
using namespace std;
void testcase(){
    int n;
    cin >> n;
    vector<int> v(n);
    int min1 = 999999;
    for (int i = 0; i < n;i++){
        cin >> v[i];
        if(v[i] < min1)
            min1 = v[i];
    }
    int min2 = 999999;
    for (int i = 0; i < n;i++){
        if(v[i] < min2 && v[i] != min1)
            min2 = v[i];
    }
    if(min2==999999){
        cout << -1;
    }
    else{
        cout << min1 << " " << min2;
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
