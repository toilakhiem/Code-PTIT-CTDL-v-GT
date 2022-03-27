#include <bits/stdc++.h>
using namespace std;
int k = 1;
vector<string> res;
void printArray(int arr[], int n)
{
    int i;
    cout << "Buoc " << k++ << ": ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertSort(int a[], int n)
{
    int pos, x;
    res.push_back("Buoc 0: " + to_string(a[0]));
    for (int i = 1; i < n; i++)
    {
        string s = "Buoc " + to_string(i) + ": ";
        x = a[i];
        pos = i;
        while (pos > 0 && x < a[pos - 1])
        {
            a[pos] = a[pos - 1];
            pos--;
        }
        a[pos] = x;
        for (int j = 0; j <= i; j++)
        {
            s += to_string(a[j]) + " ";
        }
        res.push_back(s);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    insertSort(a, n);
    for (int i = res.size()-1; i >= 0;i--){
        cout << res[i] << endl;
    }
}