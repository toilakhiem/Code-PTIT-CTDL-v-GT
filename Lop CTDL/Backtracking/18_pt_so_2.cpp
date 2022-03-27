#include<bits/stdc++.h>
using namespace std;
#define MAX 100
#define TRUE 1
#define FALSE 0
int n, k, X[MAX], dem = 0, OK = TRUE;
vector<vector<int>> res;
void Init(void)
{
    cin >> n;
    k = 1;
    X[k] = n;
    res.clear();
}
void Result(void)
{
    vector<int> tmp;
    if (k == 1){
        tmp.push_back(X[1]);
        res.push_back(tmp);
    }
    else
    {
        for (int i = 1; i <= k; i++)
        {
            tmp.push_back(X[i]);
        }
        res.push_back(tmp);
    }
}
void Next_Division(void)
{
    int i = k, j, R, S, D;
    while (i > 0 && X[i] == 1)
        i--;
    if (i > 0)
    {
        X[i] = X[i] - 1;
        D = k - i + 1;
        R = D / X[i];
        S = D % X[i];
        k = i;
        if (R > 0)
        {
            for (j = i + 1; j <= i + R; j++)
                X[j] = X[i];
            k = k + R;
        }
        if (S > 0)
        {
            k = k + 1;
            X[k] = S;
        }
    }
    else
        OK = 0;
}
void in(){
    for (int i = 0; i < res.size(); i++)
    {
        if (res[i].size() == 1)
            cout << "(" << res[i][0] << ") ";
        else
            for (int j = 0; j < res[i].size(); j++)
            {
                if (j == 0)
                    cout << "(" << res[i][j] << " ";
                else if (j == res[i].size() - 1)
                    cout << res[i][j] << ") ";
                else
                    cout << res[i][j] << " ";
            }
    }
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        Init();
        while (OK)
        {
            Result();
            Next_Division();
        }
        cout << res.size() << endl;
        in();
        OK = true;
        cout << endl;
    }
    return 0;
}