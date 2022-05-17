#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    long long res = 0;
	int j = 1;
    for (int i = 0; i < n-1; i++) {
        while (a[j] -a[i] < k && j < n){
        	j++;
		}
		res+= (long long)j-i-1;
}
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}