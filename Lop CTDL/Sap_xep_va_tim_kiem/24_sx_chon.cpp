#include<bits/stdc++.h>
using namespace std;
int k = 1;
vector<string> res;
void printArray(int arr[], int n)
{
    string s = "Buoc " + to_string(k++) + ": ";
    int i;
    for (i = 0; i < n; i++)
    {
        s += to_string(arr[i]) + " ";
    }
    res.push_back(s);
}
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    // Di chuyển ranh giới của mảng đã sắp xếp và chưa sắp xếp
    for (i = 0; i < n - 1; i++)
    {
        // Tìm phần tử nhỏ nhất trong mảng chưa sắp xếp
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Đổi chỗ phần tử nhỏ nhất với phần tử đầu tiên
        swap(arr[min_idx], arr[i]);
        printArray(arr, n);
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++)
        cin >> a[i];
    selectionSort(a, n);
    for (int i = res.size() - 1; i >= 0;i--){
        cout << res[i] << endl;
    }
}