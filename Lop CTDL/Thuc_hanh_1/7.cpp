#include<bits/stdc++.h>
using namespace std;
vector<bool> check(1000000, false);
vector<vector<int>> res;
int a, b;
void sang(){
    check[0] = check[1] = false;
    for (int i = 2; i <= b;i++)
        check[i] = 1;
    for (int i = 2; i * i <= b;i++){
        if(check[i]){
            for (int j = i*i; j <= b;j+=i)
                check[j] = false;
        }
    }
}
bool check2(int n){
    int sum = 0;
    for (int i = 2; i <= sqrt(n);i++){
        if(n%i==0) {
            if(i != n/i)
                sum += i + n / i;
            else
                sum += i;
        }
    }
    sum++;
    if(sum > n)
        return true;
    return false;
}
void testcase(){
    cin >> a >> b;
    sang();
    int dem = 0;
    if(a%2==1)
        a++;
    for (int i = a; i <= b;i+=2){
        if(check[i])
            continue;
        else {
            if(check2(i)){
                dem++;
            cout << i << endl;
            }
        }
    }
    cout << dem;
}
int main(){
    sang();
    int x = 1;
    while(x--)
        testcase();
}