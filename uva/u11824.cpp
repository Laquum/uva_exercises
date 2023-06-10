/* u11824.cpp */
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int T;
    cin >> T;
    while(T--)
    {
        int L = 0;
        vector<int> vec;
        long long int total = 0;
        while(cin >> L)
        {
            if(L == 0)
                break;
            
            vec.push_back(L);
        }
        
        sort(vec.begin(), vec.end());
        reverse(vec.begin(), vec.end());
        for(int i = 0; i < vec.size(); i++)
        {
            total += pow(vec[i], i+1);
        }
        total *= 2;
        
        if(total > 5000000)
            cout << "Too expensive\n";
        else
            cout << total << "\n";
    }
}

/
