
#include <bits/stdc++.h>
using namespace std;
bool areBracketsBalanced(string expr)
{
	stack<char> s;
	char x;
	for (int i = 0; i < expr.length(); i++)
	{
		if (expr[i] == '(' || expr[i] == '['
			|| expr[i] == '{')
		{
			s.push(expr[i]);
			continue;
		}

		if (s.empty())
			return false;

		switch (expr[i]) {
		case ')':
			
			// Store the top element in a
			x = s.top();
			s.pop();
			if (x == '{' || x == '[')
				return false;
			break;

		case '}':

			// Store the top element in b
			x = s.top();
			s.pop();
			if (x == '(' || x == '[')
				return false;
			break;

		case ']':

			// Store the top element in c
			x = s.top();
			s.pop();
			if (x == '(' || x == '{')
				return false;
			break;
		}
	}
	return (s.empty());
}

int main()
{
    int x;
    cin >> x;
    
    return 0;
}
