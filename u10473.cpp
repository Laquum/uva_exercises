/* u10473.cpp */
#include <bits/stdc++.h>
using namespace std;

void h2D(string& s)
{
    int base = 1, val = 0;
    int result = 0;
    while(!s.empty())
    {
        val = s.back();
        s.pop_back();
        if(val >= 'A' && val <= 'F')
            val = (val - 'A' + 10);
        else
            val -= '0';
        val *= base;
        result += val;
        base *= 16;
    }
    cout << result << "\n";
}

void d2H(int n)
{
    if(n == 0)
        return;
    int d = n % 16;
    d2H(n / 16);
    if(d > 9)
        cout << "ABCDEF"[d - 10];
    else
        cout << d;
}

int main()
{
    string s;

    while(cin >> s)
    {
        if(s[0] == '-')
            break;

        if(s[0] == '0' && s[1] == 'x')
        {
            s.erase(0, 2);
            h2D(s);
        }
        else
        {
            int n = stoi(s);
            cout << "0x";
            if(n == 0)
                cout << 0;
            else
                d2H(n);
            cout << "\n";
        }
    }

    return 0;
}
