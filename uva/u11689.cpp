/* u11689.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    while(N--)
    {
        int e, f ,c;
        
        cin >> e >> f >> c;
        
        int empty = e + f;
        int drink = 0;
        while(empty >= c)
        {
            drink += (empty / c);
            empty = (empty / c) + (empty % c);
        }
        
        cout << drink << "\n";
    }
    
    return 0;
}
