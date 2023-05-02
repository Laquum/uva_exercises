/* u11728.cpp */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k = 0;
    int N;
    while(cin >> N)
    {
        if(N == 0)
            break;
        
        int S = N;
        int sum = 0;
        do
        {
            sum = 0;
            vector<int> factors;
            int i;
            for(i = 1; i < sqrt(S); i++)
            {
                if(S % i == 0)
                {
                    factors.push_back(i);
                    factors.push_back(S / i);
                }
            }
            
            if(i * i == S)
                factors.push_back(i);
                
            for(int i = 0; i < factors.size(); i++)
                sum += factors[i];
 
            if(sum == N)
                break;
            S--;
        }while(sum > 1);
        
        cout << "Case " << ++k << ": ";
        if(sum == N)
            cout << S  << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}

