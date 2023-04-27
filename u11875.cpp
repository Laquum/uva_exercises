/* u11875.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, k = 0;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        vector<int> vec;
        while(N--)
        {
            int val;
            cin >> val;
            vec.push_back(val);
        }
        
        sort(vec.begin(), vec.end());
        
        cout << "Case " << ++k << ": " << vec[vec.size()/2] << "\n";
    }
    
    return 0;
}
