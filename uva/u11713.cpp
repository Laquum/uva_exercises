/* u11713.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    string name1, name2;
    getline(cin, name1);
    while(t--)
    {
        getline(cin, name1);
        getline(cin, name2);
        
        if(name1.size() != name2.size())
        {
            cout << "No\n";
            continue;
        }
        
        bool isSame = true;
        for(int i = 0; i < name1.size(); i++)
        {
            if(name1[i] == 'a' || name1[i] == 'e' || name1[i] == 'i' || name1[i] == 'o' || name1[i] == 'u')
            {
                if(name2[i] == 'a' || name2[i] == 'e' || name2[i] == 'i' || name2[i] == 'o' || name2[i] == 'u')
                    continue;
                else
                {
                    isSame = false;
                    break;
                }
            }
            
            if(name1[i] != name2[i])
            {
                isSame = false;
                break;
            }
        }
        
        if(isSame)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    
    return 0;
}

