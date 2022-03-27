#include <bits/stdc++.h>
using namespace std;
bool ok = true;
int a[1000], n;
string s;
// C1:PP Sinh Kế tiếp
//  void sinh(){
//      int i = n - 1;
//      while (i > 0 && a[i] > a[i + 1])
//          i--;
//      if (i <= 0)
//      {
//          ok = false;
//      }
//      else
//      {
//          int j = n;
//          while (a[j] < a[i])
//              j--;
//          swap(a[i], a[j]);
//          int r = i + 1, l = n;
//          while (r < l)
//          {
//              swap(a[l], a[r]);
//              r++;
//              l--;
//          }

//     }
// }
// void out(){
//     for (int i = 1; i <= n; i++)
//         cout << a[i];
//     cout << " ";
// }
// void testcase()
// {
//     ok = true;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//         a[i] = i;
//     while(ok){
//         out();
//         sinh();
//     }
//     cout << endl;
// }
// C2: Quay lui
int used[20] = {0};
vector<int> res;
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (used[j] == 0)
        {
            used[j] = 1;
            res.push_back(j);
            if (res.size() == n)
            {
                for (int k : res)
                    cout << s[k-1];
                cout << " ";
            }
            else
                Try(i + 1);
            res.pop_back();
            used[j] = 0;
        }
    }
}
void testcase()
{
    cin >> s;
    n = s.size();
    res.clear();
    Try(0);
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}