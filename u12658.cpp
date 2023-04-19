/* u12658.cpp with ugly code */
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int * res = new int[n];
    
    string line;
    string s2;
    
    cin >> line;
    for(int i = 0; i < n; i++)
    {
        s2 = "";
        for(int j = 0; j < 4; j++)
            s2.push_back(line[i*4+j]);
        
        if(s2.compare(".*..") == 0)
            res[i] = 1;
        else
            res[i] = 2;
    }
    
    cin >> line;
    cin >> line;    
    cin >> line;
    for(int i = 0; i < n; i++)
    {
        s2 = "";
        for(int j = 0; j < 4; j++)
            s2.push_back(line[i*4+j]);
        
        if(res[i] == 2)
        {
            if(s2.compare("..*.") == 0)
                res[i] = 3;
        }
    }   
    cin >> line;  
  
    for(int i = 0; i < n; i++)
        cout << res[i];
    cout << '\n';
    delete[] res;

    return 0;
} 
