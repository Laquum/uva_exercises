/* u11577.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    
    getline(cin, st);
    int n = stoi(st);
    while(n--)
    {
        getline(cin, st);
        
        vector<int> stat(26, 0);
        
        int idx;
        int most = 0;
        for(int i = 0; i < st.size(); i++)
        {
            if(!isalpha(st[i]))
                continue;
            
            if(st[i] >= 'A' && st[i] <= 'Z')
                st[i] = tolower(st[i]);
                
            int idx = st[i] - 'a';
            stat[idx] += 1;
            most = max(most, stat[idx]);
        }
        
        for(int i = 0; i < 26; i++)
        {
            char res = 'a' + i;
            if(stat[i] == most)
                cout << res;
        }
        cout << "\n";
        
    }
    
    return 0;
}
