#include <bits/stdc++.h>
using namespace std;
void testcase(){
    int n;
    cin >> n;
    scanf("\n");
    vector<pair<int, int>> v;
    for (int i = 1; i <= n;i++){
        string s, tmp;
        getline(cin, s);
        stringstream ss(s);
        while(ss>>tmp){
            int t = stoi(tmp);
            if(t>i)
                v.push_back({i, t});
        }
    }
    for(auto i:v)
        cout << i.first << " " << i.second << endl;
}
int main()
{
    int x = 1;
    while (x--)
        testcase();
}

