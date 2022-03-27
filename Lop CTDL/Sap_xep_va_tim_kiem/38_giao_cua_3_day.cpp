#include <bits/stdc++.h>
using namespace std;
void nhap(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void testcase()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int a1[100000], a2[100000], a3[100000];
    nhap(a1, n1);
    nhap(a2, n2);
    nhap(a3, n3);
    int check = 0;
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (a1[i] == a2[j] && a2[j] == a3[k])
        {
            cout << a1[i] << " ";
            check = 1;
            i++;
            j++;
            k++;
        }
        else if (a1[i] < a2[j])
            i++;
        else if (a2[j] < a3[k])
            j++;

        else
            k++;
    }
    if (check == 0)
        cout << "-1";
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}
