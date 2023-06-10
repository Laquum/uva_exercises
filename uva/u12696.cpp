/* u12696.cpp */
#include <iostream>

using namespace std;

int main()
{
    int t;
    int pass = 0;
    
    cin >> t;
    while(t--)
    {
        double l, wid, d , w;
        bool test1 = true;
        bool test2 = true;
        bool test3 = true;
        bool testr;
        
        cin >> l >> wid >> d >> w;
        if(l > 56.0)
            test1 = false;
        if(wid > 45.0)
            test1 = false;
        if(d > 25.0)
            test1 = false;
        if((l + wid + d) > 125.0)
            test2 = false;
        if(w > 7.0)
            test3 = false;
        
        testr = (test1 | test2) & test3;
        if(!testr)
            cout << 0 << '\n';
        else
        {
            cout << 1 << '\n';
            pass+=1;
        }
    }

    cout << pass << '\n';
    return 0;
}

