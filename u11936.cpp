/* u11936.cpp */
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >>N;
    
    int arr[3] = {0};
    while(N--)
    {
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr+3);
        
        int d = arr[0] + arr[1] - arr[2];
        if(d > 0)
            cout << "OK\n";
        else
            cout << "Wrong!!\n";
    }

    return 0;
}
