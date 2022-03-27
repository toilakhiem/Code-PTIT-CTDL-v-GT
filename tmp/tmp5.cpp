// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the max length of the
// sub-array that have the maximum average
// (average value of the elements)
int maxLenSubArr(int a[], int n)
{
	int count, j;
	int cm = 1, max = 0;

	// Finding the maximum value
	for (int i = 0; i < n; i++) {
		if (a[i] > max)
			max = a[i];
	}

	for (int i = 0; i < n - 1;) {
		count = 1;

		// If consecutive maximum found
		if (a[i] == a[i + 1] && a[i] == max) {

			// Find the max length of consecutive max
			for (j = i + 1; j < n; j++) {
				if (a[j] == max) {
					count++;
					i++;
				}
				else
					break;
			}

			if (count > cm)
				cm = count;
		}
		else
			i++;
	}

	return cm;
}

// Driver code
int main()
{
	int arr[] = { 5, 1, 6, 7, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << maxLenSubArr(arr, n);

	return 0;
}
