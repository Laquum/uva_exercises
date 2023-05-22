
/* u10699.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    while(cin >> n)
    {
        if(n == 0)
            break;
        
        int count = 0;
        int num = n;
        for(int i = 2; i <= n; i++)
        {
            if(num % i == 0)
            {
                count++;
                while(num % i == 0)
                    num /= i;
            }
        }
        
        cout << n << " : " << count << "\n";
    }

    return 0;
}
