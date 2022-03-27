#include <bits/stdc++.h>
using namespace std;
int k = 1;
vector<string> res;
void printArray(int arr[], int n)
{
    int i;
    string s = "Buoc " + to_string(k++) + ": ";
    for (i = 0; i < n; i++)
    {
        s += to_string(arr[i]) + " ";
    }
    res.push_back(s);
}
void bubbleSort(int arr[], int n)
{
    res.clear();
    k = 1;
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n - 1; i++)
    {
        // i phần tử cuối cùng đã được sắp xếp
        haveSwap = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                haveSwap = true; // Kiểm tra lần lặp này có swap không
            }
        }
        // Nếu không có swap nào được thực hiện => mảng đã sắp xếp. Không cần lặp thêm
        if (haveSwap == false)
        {
            break;
        }
        printArray(arr, n);
    }
}
int main()
{
    int x;
    cin >> x;
    while(x--){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bubbleSort(a, n);
    for (int i = res.size()-1; i >= 0; i--)
    {
        cout << res[i] << endl;
    }
    }
}