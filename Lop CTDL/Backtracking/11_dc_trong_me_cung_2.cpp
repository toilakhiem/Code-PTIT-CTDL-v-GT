    #include <bits/stdc++.h>
    using namespace std;
    int n, a[100][100];
    bool visited[100][100] = {false};
    vector<string> res;
    void Try(string s,int i, int j){
        if (i == 1 && j == 1 && !a[i][j])
        {
            return;
        }
        if(i==n && j == n && a[i][j]){
            res.push_back(s);
            return;
        }
        if(i<n && a[i+1][j] && !visited[i+1][j]){
            visited[i][j] = true;
            Try(s + "D", i + 1, j);
            visited[i][j] = false;
        }
        if (j < n && a[i][j+1] && !visited[i][j+1])
        {
            visited[i][j] = true;
            Try(s + "R", i , j+1);
            visited[i][j] = false;
        }
        if (i > 1 && a[i-1][j] && !visited[i-1][j])
        {
            visited[i][j] = true;
            Try(s + "U", i-1, j);
            visited[i][j] = false;
        }
        if (j > 1 && a[i][j-1] && !visited[i][j-1])
        {
            visited[i][j] = true;
            Try(s + "L", i, j-1);
            visited[i][j] = false;
        }
    }
    void testcase()
    {
        cin >> n;
        res.clear();
        for (int i = 1; i <= n;i++){
            for (int j = 1; j <= n;j++){
                cin >> a[i][j];
                visited[i][j] = false;
            }
        }
        Try("", 1, 1);
        sort(res.begin(), res.end());
        if (res.size()==0)
            cout << "-1";
        else
        {
            for(string i : res)
                cout << i << " ";
        }
        cout << endl;
    }
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int x;
        cin >> x;
        while (x--)
            testcase();
    }
    /*

    */