
/* u11727.cpp */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, k = 0;
    cin >> T;
    
    while(T--)
    {
        vector<int> arr;
        for(int i = 0; i < 3; i++)
        {
            int val;
            cin >> val;
            arr.push_back(val);
        }
        sort(arr.begin(), arr.end());
        
        cout << "Case " << ++k << ": ";
        cout << arr[1] << "\n";
    }
    return 0;
}

