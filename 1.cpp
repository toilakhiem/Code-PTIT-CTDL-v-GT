//Liệt kê các thành phần liên thông của 1 đồ thị vô hướng cho trước
#include <bits/stdc++.h>
using namespace std;
int N;
bool used[1001];
int mt[100][100];
int dem = 1;
vector<int> v[1001];
void dfs(int u){
    cout << u << " ";
    used[u] = true;
    for (int i:v[u]){
        if(used[i] == false){
            dfs(i);
        }
    }
}
void input(){
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            cin >> mt[i][j];
            if (mt[i][j] == 1) {
                v[i].push_back(j);
                v[j].push_back(i);
            }
        }
    }
    memset(used,false,sizeof(used));
}
void testcase(){
    input();
    for (int i = 1; i <= N;i++){
        if(!used[i]) {
            cout << "Thanh phan lien thong " << dem << endl;
            dfs(i);
            dem++;
        }
    }
    for(int i=1;i<=N;i++){
			v[i].clear();
	}
}
int main()
{
    int x = 1;
    while (x--)
        testcase();
}