/* u11942.cpp */
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >>N;
    
    int arr[10] = {0};
    cout << "Lumberjacks:\n";
    while(N--)
    {
        for(int i = 0; i < 10; i++)
            cin >> arr[i];
        
        bool incre;
        if(arr[0] - arr[1] < 0)
            incre = true;
        else
            incre = false;
        
        int k;
        if(incre)
        {
            for(k = 1; k < 10; k++)
            {
                if(arr[k-1] - arr[k] > 0)
                    break;
            }
        }
        else
        {
            for(k = 1; k < 10; k++)
            {
                if(arr[k-1] - arr[k] < 0)
                    break;
            }
        }
        
        if(k == 10)
            cout << "Ordered\n";
        else
            cout << "Unordered\n";
    }

    return 0;
}

