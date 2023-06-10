/* u10110.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    while(cin >> n)
    {
        if(n == 0)
            break;
        
        bool perfectSquare = false;
        
        int sqroot = ceil(sqrt(n));
        if(sqroot * sqroot == n)
            perfectSquare = true;
            
        if(perfectSquare)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
