/* u11677.cpp */
#include <iostream>

using namespace std;

int main()
{
    int H1, M1, H2, M2;
    
    while(cin >> H1 >> M1 >> H2 >> M2)
    {
        if(H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0)
            break;
            
        int t1, t2, t3;
        t1 = H1 * 60 + M1;
        t2 = H2 * 60 + M2;
        
        if(t1 > t2)
            t3 = t2 - t1 + 1440;
        else
            t3 = t2 - t1;
            
        cout << t3 << "\n";
            
    }

    return 0;
}


