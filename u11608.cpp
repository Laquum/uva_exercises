/* u11608.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int S, k = 0;

    while(cin >> S)
    {
        if(S < 0)
            break;
        
        int prob = S;
        vector<int> create;
        vector<int> need;
        
        for(int i = 0; i < 12; i++)
        {
            cin >> S;
            create.push_back(S);
        }
        
        for(int i = 0; i < 12; i++)
        {
            cin >> S;
            need.push_back(S);
        }
        
        cout << "Case " << ++k << ":\n";
        for(int i = 0; i < 12; i++)
        {
            bool check = true;
            if(prob < need[i])
                check = false;
            
            if(check)
            {
                cout << "No problem! :D\n";
                prob -= need[i];
            }
            else
                cout << "No problem. :(\n";
    
            prob += create[i];
        }
    }
    
    return 0;
}

