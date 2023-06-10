/* u11900.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k = 0;
    int T;
    int n, P, Q;
    cin >> T;
    while(T--)
    {
        cin >> n >> P >> Q;
        int num = 0;
        
        vector<int> vec;
        while(n--)
        {
            int val;
            cin >> val;
            vec.push_back(val);
        }
        
        sort(vec.begin(), vec.end());
        reverse(vec.begin(), vec.end());
        while(Q >= 0)
        {
            if(vec.size() != 0 && Q-vec[vec.size() - 1] >= 0)
            {
                num++;
            }
            
            if(num == P)
                break;
            Q -= vec[vec.size() - 1];
            vec.pop_back();
        }
        
        cout << "Case " << ++k << ": " << num << "\n";
    }
    
    return 0;
}

