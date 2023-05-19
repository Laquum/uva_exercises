/* u11059.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M = 0;
    long long int S;
    
    while(cin >> N)
    {
        long long int P = 0;
        vector<long long int> v;
        for(int i = 0; i < N; i++)
        {
            cin >> S;
            v.push_back(S);
        }
        
        for(int i = 0; i < N; i++)
        {
            long long int tmp = 1;
            for(int j = i; j < N; j++)
            {
                tmp *= v[j];
                P = max(P, tmp);
            }
        }
            
        cout << "Case #" << ++M << ": The maximum product is " << P << ".\n\n";
    }
    return 0;
}

