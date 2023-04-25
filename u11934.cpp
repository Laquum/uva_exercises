/* u11934.cpp */
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d, L;
    
    int divisible = 0;
    while(cin >> a >> b >> c >> d >> L)
    {
        if(a == 0 && b == 0 && c == 0 && d == 0 && L == 0)
            break;
        divisible = 0;
            
        for(int i = 0; i <= L; i++)
        {
            int y = a * i * i + b * i + c;
            if(y % d == 0)
                divisible++;
        }
        
        cout << divisible << "\n";
    }

    return 0;
}

