/* u847.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    
    while(cin >> n)
    {
        while(n > 18)
            n /= 18;
        string res = (n <= 9)? string{"Stan wins.\n"}: string{"Ollie wins.\n"};
        cout << res;
    }
    return 0;
}
