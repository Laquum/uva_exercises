/* u11428.cpp */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    int N;
    
    while(cin >> N)
    {
        if(N == 0)
            break;
        int minY = 10005;
        
        for(x = 0; x <= ceil(sqrt(N)) + 5; x++)
        {
            for(y = 0; y < x; y++)
            {
                if(x * x * x - y * y * y == N)
                    minY = min(minY, y);
            }
        }
        
        if(minY != 0 && minY != 10005)
        {
            for(x = 1; x < N; x++)
            {
                if(x * x * x - minY*minY*minY == N)
                    break;
            }
        }
        
        if(minY == 10005 || minY == 0)
            cout << "No solution\n";
        else
            cout << x << " " << minY << "\n";
        
    }
    return 0;
}


