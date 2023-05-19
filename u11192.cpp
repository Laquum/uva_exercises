/* u11192.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int G;
    
    while(cin >> G)
    {
        if(G == 0)
            break;
        
        vector<string> vs(G);
        string input;
        
        cin >> input;
        int l = input.size() / G;
        for(int i = 0, j = 0; i < input.size(); i++)
        {
            if(i != 0 && i % l == 0)
                j++;
            vs[j] += input[i];
        }
        
        for(int j = 0; j < G; j++)
        {
            reverse(vs[j].begin(), vs[j].end());
            cout << vs[j];
        }
        cout << "\n";
    }
    return 0;
}


