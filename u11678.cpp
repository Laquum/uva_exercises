/* u11678.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B;
    
    int val;
    while(cin >> A >> B)
    {
        if(A == 0 && B == 0)
            break;
            
        vector<int> vecA;
        vector<int> vecB;
        
        bool first = true;
        while(A--)
        {
            cin >> val;
            if(first)
            {
                vecA.push_back(val);
                first = false;
                continue;
            }
            
            if(val != vecA[vecA.size()-1])
                vecA.push_back(val);
        }
        
        first = true;
        while(B--)
        {
            cin >> val;
            if(first)
            {
                vecB.push_back(val);
                first = false;
                continue;
            }
            
            if(val != vecB[vecB.size()-1])
                vecB.push_back(val);
        }
        
        if(vecA.size() > vecB.size())
        {
            vector<int> tmp = vecA;
            vecA = vecB;
            vecB = tmp;
        }
        
        for(int i = 0; i < vecB.size(); i++)
        {
            for(int j = 0; j < vecA.size(); j++)
            {
                if(vecA[j] == vecB[i])
                {
                    vecA[j] = 0;
                    break;
                }
            }
        }
        
        int count = 0;
        for(int i = 0; i < vecA.size(); i++)
        {
            if(vecA[i] != 0)
                count++;
        }
        
        cout << count << "\n";
    }
    return 0;
}
