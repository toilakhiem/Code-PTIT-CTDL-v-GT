#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	string s; cin>>s;
	int dem=0,x=0,t=0,d=0;
	for(int i=0;i<n;i++){
		if(s[i]=='X') x++;
		if(s[i]=='T') t++;
		if(s[i]=='D') d++;
	}
	for(int i=n-d;i<n;i++){
		if(s[i]!='D') dem++;
	}
	for(int i=0;i<x;i++){
		if(s[i]!='X') dem++;
	}
	int a=0,b=0;
	for(int i=0;i<x;i++){
		if(s[i]=='D') a++;
	}
	for(int i=n-d;i<n;i++){
		if(s[i]=='X') b++;
	}
	cout<<dem-min(a,b)<<endl;
}
/*
#include <bits/stdc++.h>
using namespace std;
bool cmp(char a, char b)
{
    if(a=='X'){
        if(b=='T' || b == 'D')
            return true;
    }
    if(a=='T' && b == 'D')
        return true;
    return false;
}
main()
{
    int t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int tmp, dem = 0;
        string s1 = s;
        sort(s1.begin(), s1.end(), cmp);
        cout << s1 << endl;
        for (int i = 0; i < s.size(); i++)
        {
            if (s1[i] != s[i])
            {
                tmp = i;
                while (s.substr(tmp + 1).find(s1[i]) != string::npos)
                {
                    int tmp2 = s.substr(tmp + 1).find(s1[i]) + tmp + 1;
                    swap(s[tmp], s[tmp2]);
                    tmp = tmp2;
                }
                dem++;
            }
        }
        cout << dem << endl;
    }
}

// 3435335 
// 5543333

*/