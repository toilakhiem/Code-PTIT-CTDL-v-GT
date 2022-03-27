#include <bits/stdc++.h>
using namespace std;
long long tim(long long s)
{
    int a = cbrt(s);
    string s1 = to_string(s);
    bool OK = false;
    while (a > 0)
    {
        long long a1 = (long long)a * a * a;
        string a2 = to_string(a1);
        int k = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == a2[k])
                k++;
            if (k >= a2.size())
            {
                OK = true;
                break;
            }
        }
        if (OK == true)
            break;
        else
            a--;
    }
    if (OK == false)
    {
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == '0')
            {
                return 0;
                break;
            }
        }
        return -1;
    }
    return (long long)a * a * a;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        cout << tim(n) << endl;
    }
}