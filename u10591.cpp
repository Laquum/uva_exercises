/* u10591.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    int t, k = 0;

    cin >> t;
    while(t--)
    {
        vector<long long int> check;

        cin >> n;
        bool ishappy = false;
        long long int val = n;
        while(1)
        {
            check.push_back(val);

            if(val == 1)
            {
                ishappy = true;
                break;
            }

            if(count(check.begin(), check.end(), val) > 1)
                break;

            long long int k = 0;
            for(long long int m = val; m > 0; m /= 10)
            {
                k += ((m%10)* (m%10));
            }
            val = k;
        }

        cout << "Case #" << ++k << ": " << n;
        if(ishappy)
            cout << " is a Happy number.\n";
        else
            cout << " is an Unhappy number.\n";
    }


    return 0;
}
