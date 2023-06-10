/* u11597.cpp*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k = 0;
    
    while(cin >> n)
    {
        if(n == 0)
            break;
        
        cout << "Case " << ++k << ": ";
        cout << (n>>1)  << "\n";
    }
    
    return 0;
}


