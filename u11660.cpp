/* u11660.cpp */
/** 
 * it seems work properly but it is too slow to pass the test,
 * maybe I need to study Algorithm to figure it out.
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x1;
    int i, j;
    
    while(cin >> x1 >> i >> j)
    {
        if(x1 == "0" && i == 0 && j == 0)
            break;
        
        for(int count = 1; count < i ;count++)
        {
            vector<char> quantity = {'#'};
            vector<char> value = {'#'};
            
            for(int k = 0; k < x1.size(); k++)
            {
                int temp = 1;
                if(x1[k] != value[value.size() - 1])
                {
                    value.push_back(x1[k]);
                    
                    int l = 0;
                    for(l = k + 1; x1[l] == x1[k] && l < x1.size(); l++)
                        temp++;
                    k = l-1;
                    quantity.push_back(temp + '0');
                }
            }
            
            x1 = "";
            for(int k = 1; k < quantity.size(); k++)
            {
                x1 += (quantity[k]);
                x1 += (value[k]);
            }
        }
        
        cout << x1[j-1] << "\n";
    }
    return 0;
}
