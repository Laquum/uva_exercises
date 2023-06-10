/* u10340.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;

    while(cin >> s >> t)
    {
        for(int i = 0; i < t.size(); i++)
        {
            if(s.front() == t[i])
            {
                s.erase(0, 1);
            }
        }

        if(s.empty())
            cout << "Yes\n";
        else
            cout << "No\n";


    }

    return 0;
}

