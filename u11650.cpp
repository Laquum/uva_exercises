/* u11650.cpp */
/* more ugly code hehehe */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int H, M;
    int T;
    cin >> T;
    while(T--)
    {
        scanf("%d:%d", &H, &M);
        int rH = (1440 - H * 60 - M)/60;
        int rM = (1440 - H * 60 - M)%60;
        rH %= 12;
        
        if(rH == 0)
        {
            if(rM == 0)
            {
                cout << "12:00\n";
                continue;
            }
            rH = 12;
        }
        
        if(rH < 10)
        {
            if(rM < 10)
                cout << "0" << rH << ":0" << rM << "\n";
            else
                cout << "0" << rH << ":" << rM << "\n";
        }
        else
        {
            if(rM < 10)
                cout << rH << ":0" << rM << "\n";
            else
                cout << rH << ":" << rM << "\n";
        }
       
    }
    return 0;
}
