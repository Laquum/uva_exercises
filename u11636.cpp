/* u11636.cpp */
/* log2() might be faster */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, k = 0;
    
    while(cin >> N)
    {
        if(N < 0)
            break;
            
        int lineNum = 1, copy = 0;
        
        while(lineNum < N)
        {
            lineNum *= 2;
            copy++;
        }
        
        cout << "Case " << ++k << ": ";
        cout << copy << "\n";
    }
    
    return 0;
}

