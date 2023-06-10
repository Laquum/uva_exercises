/* u10324.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    int n, i, j, k = 0;
    
    
    while(cin >> st)
    {
        if(st == "\n")
            break;
        
        cout << "Case " << ++k << ":\n";
        cin >> n;
        while(n--)
        {
            cin >> i >> j;
            if(i == j)
            {
                cout << "Yes\n";
                continue;
            }
            
            int pos;
            for(pos = min(i,j); pos < max(i, j); pos++)
            {
                if(st[pos] != st[pos + 1])
                {
                    cout << "No\n";
                    break;
                }
            }
            if(pos == max(i, j))
                cout << "Yes\n";
        }
        
    }
    return 0;
}
