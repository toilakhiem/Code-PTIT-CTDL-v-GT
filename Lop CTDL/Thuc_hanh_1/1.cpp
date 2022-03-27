#include<bits/stdc++.h>
using namespace std;
int n, k, a[100];
void print()
{
    for (int i = 1; i<= k; i++)
        cout << a[i] << " ";
    cout << endl;
}
void Try(int i){
    if(i==n)
        return;
    for (int j = n - k + i; j >= a[i-1]+1; j--)
    {
        a[i] = j;
        if(i==k)
            print();
        else{
            Try(i + 1);
        }
    }
}
void testcase(){
    cin >> n >> k;
    Try(1);
}
int main(){
    int x;
    cin >> x;
    while(x--){
        testcase();
    }
}