#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string res = "";
    cin >> s;
    stack<char> stk, tmp;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '<')
        {
            if (!stk.empty())
            {
                char x = stk.top();
                stk.pop();
                tmp.push(x);
            }
        }
        else if (s[i] == '>')
        {
            if (!tmp.empty())
            {
                char x = tmp.top();
                tmp.pop();
                stk.push(x);
            }
        }
        else if (s[i] == '-')
        {
            if (!stk.empty())
                stk.pop();
        }
        else
            stk.push(s[i]);
    }
    while (!stk.empty())
    {
        res += stk.top();
        stk.pop();
    }
    reverse(res.begin(), res.end());
    string w = "";
    while (!tmp.empty())
    {
        w += tmp.top();
        tmp.pop();
    }
    res += w;
    cout << res;
    return 0;
}   