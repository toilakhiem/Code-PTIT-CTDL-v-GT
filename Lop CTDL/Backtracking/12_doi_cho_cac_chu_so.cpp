/*
Cho số tự nhiên K và xâu ký tự các chữ số S.
 Nhiệm vụ của bạn là đưa ra số lớn nhất bằng cách thực hiện nhiều nhất K lần đổi chỗ các ký tự trong S.
  Ví dụ K =3 và S = “1234567” ta được “7654321”.

Input:
3
4
1234567
3
3435335
2
1034

Output:
7654321
5543333
4301
*/

#include <bits/stdc++.h>
using namespace std;
bool cmp(char a, char b)
{
    return a > b;
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        string s;
        cin >> k >> s;
        int tmp;
        string s1 = s;
        sort(s1.begin(), s1.end(), cmp);
        for (int i = 0; i < s.size(); i++)
        {
            // 3435335
            // 5543333
            if (k == 0)
                break;
            if (s1[i] != s[i])
            {
                tmp = i;
                while (s.substr(tmp + 1).find(s1[i]) != string::npos)
                {
                    int tmp2 = s.substr(tmp + 1).find(s1[i]) + tmp + 1;
                    swap(s[tmp], s[tmp2]);
                    tmp = tmp2;
                }
                k--;
            }
        }
        cout << s << endl;
    }
}

// 3435335 
// 5543333
