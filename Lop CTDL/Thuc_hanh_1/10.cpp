#include <bits/stdc++.h>
using namespace std;
void testcase(){
    int x;
    cin >> x;
    vector<pair<int, int>> v;
    for (int i = 0; i < x;i++){
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    long long res = 0;
    for (int i = 0; i < x-1;i++)
    {
        if(v[i].first == v[i+1].first){
            int j = i;
            int dem = 0, s1 = v[i].second, s2 = 0;
            while(v[j].first == v[j+1].first){
                j++;
                if(dem%2==0)
                    s2 += v[j].second;
                else
                    s1 += v[j].second;
                dem++;
            }
            i += j - i; res +=(long long) min(s1, s2);
        }
    }
    cout << res << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}

