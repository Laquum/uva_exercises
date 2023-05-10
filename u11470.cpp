/* u11470.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k = 0;
    
    double midX, midY;
    while(cin >> n)
    {
        if(n == 0)
            break;
        int val;
        int i = 1, j = 1;
        int q = ((n%2) == 1)? (n/2+1): n/2;
        vector<int> v = vector<int>(q, 0);
        
        if(n % 2 == 1)
        {
            midX = midY = (n / 2 + 1);
        }
        else
        {
            midX = midY = (n/2) + 0.5;
        }
        
        while(1)
        {
            cin >> val;
            
            double judge = max(abs(i - midX), abs(j-midY));
            int idx = (int)floor(judge);
            
            v[idx] += val;
            if(j == n && i == n)
                break;
            else if(j == n)
            {
                j = 1;
                i++;
                continue;
            }
            j++;
        }
        reverse(v.begin(), v.end());
        
        cout << "Case " << ++k << ":";
        for(int i = 0; i < v.size(); i++)
            cout << " " << v[i];
        cout << "\n";
    }
    return 0;
}
