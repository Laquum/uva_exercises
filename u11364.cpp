/* u11364.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, x;
    int val;

    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> v;

        int total = 0, avg = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> val;
            total += val;
            v.push_back(val);
        }
        avg = total / n;

        sort(v.begin(), v.end());
        total = v.back() - v.front();
        for(int i = 0; i < n - 1; i++)
            total += (v[i+1] - v[i]);

        cout << total << "\n";

    }
    return 0;
}

