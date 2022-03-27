#include <bits/stdc++.h>
using namespace std;

/* For a given array arr[],
returns the maximum j – i such that
arr[j] > arr[i] */
bool check(int a[], int n){
    for (int i = 0; i < n-1;i++) {
        if(a[i] < a[i+1] )
            return false;
    }
    return true;
}
void testcase()
{
    int arr[100000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if(check(arr,n)) {
        cout << "-1" << endl;
        return;
    }
    int leftMin[n];
    leftMin[0] = arr[0];
    for (int i = 1; i < n; i++)
        leftMin[i] = min(leftMin[i - 1], arr[i]);
    // leftMin[i] = min{ arr[0...i] }

    int maxDist = INT_MIN;
    int i = n - 1, j = n - 1;

    while (i >= 0 && j >= 0)
    {
        if (arr[j] > leftMin[i])
        {
            maxDist = max(maxDist, j - i);
            i--;
        }
        else
            j--;    
    }
    cout << maxDist << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}

