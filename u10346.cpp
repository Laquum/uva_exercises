/* u10346.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    while(cin >> n >> k)
    {
        int total = 0;
        while(n >= k)
        {
            total += k;
            n -= k;
            n += 1;
        }
        total += n;

        cout << total << "\n";
    }
    return 0;
}

