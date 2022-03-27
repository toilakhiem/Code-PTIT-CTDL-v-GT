#include<bits/stdc++.h>
using namespace std;
int n, B[1000] = {0}, a[1000];
bool kiemtra(){
    if(a[0] == a[1]-1 || a[0] == a[1]+1)
        return 0;
    if(a[n-1] == a[n-2]-1 || a[n-1] == a[n-2] + 1 )
        return 0;
    for (int i = 1; i < n-1;i++){
        if(a[i] == a[i-1] + 1 || a[i] == a[i-1]-1)
            return 0;
        if(a[i] == a[i+1] + 1 || a[i] == a[i+1]-1)
            return 0;
    }

    return 1;
}
void in(){
    for (int i = 0; i < n;i++){
        cout << a[i] + 1;
    }
    cout << endl;
}
void Try(int i){
    for (int j = 0; j < n; j++)
    {
        if(B[j] == 0){
            a[i] = j, B[j] = 1;
            if(i==n-1){
                if(kiemtra()){
                    in();
                }
            }else
                Try(i + 1);
            B[j] = 0;
        }
    }
}
int main()
{
    int x;
    cin >> x;
    while(x--){
        cin >> n;
        Try(0);
    }
}