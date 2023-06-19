/*e924.cpp -- stack problem */
#include <bits/stdc++.h>

using namespace std;

char judge(string& s)
{
    stack<char> stk;
    
    for(int i = 0; i < s.size(); ++i)
    {
        char ch = s[i];
        if(ch == '{' || ch == '(' || ch == '<' || ch == '[')
            stk.push(ch);
        else
        {
            if(stk.empty())
            {
                return 'N';
            }
            
            char top = stk.top();
            if((ch - top != 2) && (ch - top != 1))
            {
                return 'N';
            }
            stk.pop();
        }
    }
    
    if(!stk.empty())
        return 'N';
    return 'Y';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    string s;
    
    cin >> T;
    while(T--)
    {
        cin >> s;
        cout <<  judge(s) << "\n";
    }
    return 0;
}
