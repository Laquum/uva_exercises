/* u11494.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int X1, Y1, X2, Y2;
    
    while(cin >> X1 >> Y1 >> X2 >> Y2)
    {
        if(X1 == 0 && X2 == 0 && Y1 == 0 && Y2 == 0)
            break;
            
        int steps = 0;
        if(X1 == X2 && Y1 == Y2)
            steps = 0;
        else if(X1 == X2 || Y1 == Y2)
            steps = 1;
        else if(abs(X1 - X2) == abs(Y1 - Y2))
            steps = 1;
        else
            steps = 2;
            
        cout << steps << "\n";
    }

    return 0;
}

