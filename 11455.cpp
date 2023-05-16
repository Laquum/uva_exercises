/* u11455.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int val;
    int T;

    cin >> T;
    while(T--)
    {
        vector<long long int> v;

        for(int i = 0; i < 4; i++)
        {
            cin >> val;
            v.push_back(val);
        }

        sort(v.begin(), v.end());
        if(v[0] + v[1] + v[2] <= v[3])
            cout << "banana\n";
        else if(v[0] == v[1] && v[1] == v[2] && v[2] == v[3])
            cout << "square\n";
        else if(v[0] == v[1] && v[2] == v[3])
            cout << "rectangle\n";
        else
            cout << "quadrangle\n";
    }
    return 0;
}

