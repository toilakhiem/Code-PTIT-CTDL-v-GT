#include<bits/stdc++.h>
    using namespace std;
    using ll = long long;
    void ketqua(int a, int b)
    {
        if(b<a) {
            cout << a - b << endl;
            return;
        }
        bool used[50000];
        memset(used, false, sizeof(used));
        set<int> m;
        queue<pair<int,int>>  q;
        q.push({a,0});
        while(1){
            pair<int,int> x = q.front();
            q.pop();
            used[x.first] = 1;
            if(x.first==b){
                cout << x.second << endl;
                return;
            }
            int tmp = x.second;
            int t1 = x.first * 2;
            int t2 = x.first - 1;
            if(!used[t1] && t1<20000 && t1 > 0)  q.push({t1,tmp+1});
            if(!used[t2] && t2 < 20000 && t2>0) q.push({t2,tmp+1});
        }
    }
    void testcase(){
        int a, b;
        cin >> a >> b;
        ketqua(a, b);
    }
    int main(){
        int x;
        cin >> x;
        while(x--)
            testcase();
    }