/* u10300.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, f, ans;
    
    cin >> n;
    while(n--)
    {
        ans = 0;
        cin >> f;
        
        while(f--)
        {
            long long int a, b, c;
            cin >> a >> b >> c;
            ans += (a * c);
        }
        
        cout << ans << "\n";
    }
    return 0;
}

