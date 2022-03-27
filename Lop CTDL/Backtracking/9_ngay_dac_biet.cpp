#include<bits/stdc++.h>
using namespace std;
vector<string> res;
void Try(string s,int i){
    if((s.size() == 2 && s[1] == '0' && s[0] == '0') || (s.size() == 5 && s[s.size()-1] == '0'))
        return;
    if( s.size()==4 && s[3] != '2')
        return;
    if(s.size()==4 && s[2] == '2')
        return;
    if(s.size()==8){
        res.push_back(s);
        return;
    }
    Try(s + "0", i + 1);
    Try(s + "2", i + 1);
}
int main(){
    Try("",0);
    sort(res.begin(), res.end());
    for(string i:res){
        for (int j = 0; j < i.size();j++)
        {
            if(j==2 || j==4)
                cout << "/" <<i[j];
            else
                cout << i[j];
        }
        cout << endl;
    }
}