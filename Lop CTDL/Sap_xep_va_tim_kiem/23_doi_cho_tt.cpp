#include<bits/stdc++.h>
using namespace std;
vector<string> res;
int dem;
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void InterchangeSort(int a[], int n)
{
    dem = 1;
    for (int i = 0; i < n - 1; i++)
    {
        string s = "Buoc " + to_string(dem++) + ": ";
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
                swap(a[i], a[j]);
        }

        for (int i = 0; i < n; i++)
        {
            s += to_string(a[i]) + " ";
        }
        res.push_back(s);
    }
    for (int i = res.size()-1; i >= 0 ;i--){
        cout << res[i] << endl;
    }
    res.clear();
}
int main()
{
    int x;
    cin >> x;
    while(x--){
        int n;
        cin >> n;
        int a[100];
        nhap(a, n);
        InterchangeSort(a, n);
    }
}
