/* u11716.cpp */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string line;
    getline(cin, line);
    while(T--)
    {
        int n = 1;
        getline(cin, line);
        for(; n * n < line.size(); n++);
        if(n * n > line.size())
        {
            cout << "INVALID\n";
            continue;
        }
    
                
        for(int j = 0; j < n; j++)
            for(int i = 0; i < n; i++)
                cout << line[i*n + j];
        cout << "\n";
    }
    return 0;
}

