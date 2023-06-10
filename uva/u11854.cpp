/* u11854.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    int sides[3] = {0};
    while(cin >> sides[0] >> sides[1] >> sides[2])
    {
        if(sides[0] == 0 && sides[1] == 0 && sides[2] == 0)
            break;
            
        sort(sides, sides + 3);
        if(sides[0]*sides[0] + sides[1]*sides[1] == sides[2]*sides[2])
            cout << "right\n";
        else
            cout << "wrong\n";
        
    }
    
    return 0;
}
