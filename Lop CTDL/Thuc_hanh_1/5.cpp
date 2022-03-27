
#include <bits/stdc++.h>
using namespace std;
int n, a[100], b[100];
vector<string> v;
bool check(int c[], int cn)
{
    if (cn <= 1)
        return false;
    for (int i = 0; i < cn - 1; i++)
    {
        if (c[i] > c[i + 1])
            return false;
    }
    return true;
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        b[i] = j;
        if (i == n - 1)
        {
            int c[100], cnt = 0;
            for (int k = 0; k < n; k++)
            {
                if (b[k] == 1)
                    c[cnt++] = a[k];
            }
            if (check(c, cnt))
            {
                string s;
                for (int k = 0; k < cnt; k++)
                {
                    s += to_string(c[k]) + " ";
                }
                s.resize(s.size() - 1);
                v.push_back(s);
            }
        }
        else
            Try(i + 1);
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Try(0);
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
