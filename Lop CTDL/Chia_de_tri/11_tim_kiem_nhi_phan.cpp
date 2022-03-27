#include <bits/stdc++.h>
using namespace std;
int tim(vector<int> v, int n,int k){
    int l = 0, h = n - 1;
    while (l <= h){
        int mid = l + (h - l) / 2;
        if(v[mid] == k)
            return mid + 1;
        else if(v[mid] > k)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
void testcase(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int &i:v)
        cin >> i;
    if(tim(v,n,k) == -1)
        cout << "NO" << endl;
    else
        cout << tim(v, n, k) << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}

