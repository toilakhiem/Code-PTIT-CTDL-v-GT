#include <bits/stdc++.h>
using namespace std;
void testcase(){
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.size();i++){
        if(s[i] == '[')
            v.push_back(i);
    }
    int dem = 0, p = 0; // dem de theo doi cac dau ngoac da gap,p de theo doi cac vi tri [,
    long long sum = 0;
    for (int i = 0; i < s.size();i++){
        if(s[i] == '['){
            dem++;
            p++;
        }
        else if(s[i]==']'){
            dem--;
        }
        if(dem < 0){
            sum += v[p] - i;// doi cho mat tung nay buoc
            swap(s[i], s[v[p]]);
            p++;
            // sau khi doi cho reset ve 1(nhap ra khac hieu)
            dem = 1;
        }
    }
    cout << sum << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}

