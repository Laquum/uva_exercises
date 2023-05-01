/* u11743.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        string digits = "";
        string temp = "";
        for(int i = 0; i < 4; i++)
        {
            cin >> temp;
            digits += temp;
        }
        
        vector<int> vec;
        for(int i = 0; i < 16; i+=2)
            vec.push_back((digits[i] - '0') * 2);
        
        int dSum = 0, undSum = 0;
        for(int i = 0; i < vec.size(); i++)
        {
            while(vec[i] != 0)
            {
                dSum += (vec[i] % 10);
                vec[i] /= 10;
            }
        }
        
        for(int i = 1; i < 16; i+=2)
        {
            undSum += (digits[i] - '0');
        }
        
        int sum = dSum + undSum;
        
        if(sum % 10 == 0)
            cout << "Valid\n";
        else
            cout << "Invalid\n";
        
    }
    
    return 0;
}


