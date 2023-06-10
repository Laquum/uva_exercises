/* u10714.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, val;

    cin >> n;
    while(n--)
    {
        vector<pair<int, int>> v;
        int poleLenght, ants;

        cin >> poleLenght >> ants;
        for(int i = 0; i < ants; i++)
        {
            pair<int, int> temp;
            cin >> temp.first;
            temp.second = poleLenght - temp.first;
            v.push_back(temp);
        }

        int shortest = 0, longest = 0;
        for(int i = 0; i < ants; i++)
        {
            shortest = max(shortest, min(v[i].first, v[i].second));
            longest = max(longest, max(v[i].first, v[i].second));
        }

        cout << shortest << " " << longest << "\n";

    }

    return 0;
}


