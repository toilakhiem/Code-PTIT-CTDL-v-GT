#include<bits/stdc++.h>
using namespace std;
int n, B[1000] = {0}, A[1000];
char c;
string s = "ABCDEFGH";
bool kiemtra(){
    for (int i = 1; i < n-1;i++){
        if(A[i] == 0 && A[i-1] != 4 && A[i+1] != 4)
            return 0;
        if(A[i] == 4 && A[i-1] != 0 && A[i+1] != 0)
            return 0;
    }
    return 1;
}
void in(){
    for (int i = 0; i < n;i++){
        cout << s[A[i]];
    }
    cout << endl;
}
void Try(int i){
    for (int j = 0; j < n; j++)
    {
        if(B[j] == 0){
            A[i] = j, B[j] = 1;
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
    cin >> c;
    n = c - 'A' + 1;
    cout << n << endl;
    Try(0);
}