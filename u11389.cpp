/* u11389.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d, r;

    while(cin >> n >> d >> r)
    {
        if(n == 0 && d == 0 && r == 0)
            break;

        vector<int> morning;
        vector<int> evening;
        int val;
        for(int i = 0; i < n; i++)
        {
            cin >> val;
            morning.push_back(val);
        }
        sort(morning.begin(), morning.end());
        reverse(morning.begin(), morning.end());

        for(int i = 0; i < n; i++)
        {
            cin >> val;
            evening.push_back(val);
        }
        sort(evening.begin(), evening.end());

        int pay = 0;
        for(int i = 0; i < n; i++)
        {
            if(morning[i] + evening[i] > d)
                pay += ((morning[i] + evening[i]) - d) * r;
        }

        cout << pay << "\n";
    }
    return 0;
}

