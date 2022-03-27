// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<vector<int>> res;
    bool x[100] = {false}, xuoi[100] = {false}, nguoc[100] = {false};
    void Try(int i, int n, vector<int> v)
    {
        for (int j = 1; j <= n; j++)
        {
            if (!x[j] && !xuoi[i - j + n] && !nguoc[i + j - 1])
            {
                v[i - 1] = j;
                x[j] = true;
                xuoi[i - j + n] = true;
                nguoc[i + j - 1] = true;
                if (i == n)
                {
                    res.push_back(v);
                }
                else
                    Try(i + 1, n, v);
                x[j] = false;
                xuoi[i - j + n] = false;
                nguoc[i + j - 1] = false;
            }
        }
    }
    vector<vector<int>> nQueen(int n)
    {
        // code here
        vector<int> v(n, 0);
        Try(1, n, v);
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    Solution ob;
    vector<vector<int>> ans = ob.nQueen(8);
    while (t--)
    {
        int a[10][10];
        for (int i = 1; i <= 8;i++){
            for (int j = 1; j <= 8;j++)
                cin >> a[i][j];
        }
        int res = 0;
        for(auto i:ans){
            int sum = 0;
            for (int j = 0; j < i.size();j++)
            {
                sum += a[j + 1][i[j]];
            }
            res = max(res, sum);
        }
        cout << res << endl;
    }
    return 0;
} // } Driver Code Ends