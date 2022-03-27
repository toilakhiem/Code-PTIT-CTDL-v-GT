// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<int>> res;
    bool x[100]={false},xuoi[100]={false},nguoc[100]={false};
    void Try(int i,int n,vector<int> v){
        for(int j=1;j<=n;j++){
            if(!x[j] && !xuoi[i-j+n] && !nguoc[i+j-1]){
                v[i-1] = j;
                x[j] = true;
                xuoi[i-j+n] = true;
                nguoc[i+j-1] = true;
                if(i==n){
                    res.push_back(v);
                }else Try(i+1,n,v);
                x[j] = false;
            xuoi[i-j+n] = false;
            nguoc[i+j-1] = false;
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<int> v(n,0);
        Try(1,n,v);
        return res;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends