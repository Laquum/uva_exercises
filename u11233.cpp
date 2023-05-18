/* u11233.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int L, N;
    vector<pair<string, string>> v;
    cin >> L >> N;
    
    while(L--)
    {
        pair<string, string> p;
        cin >> p.first >> p.second;
        v.push_back(p);
    }
    
    string input;
    while(N--)
    {
        cin >> input;
        
        bool inTable = false;
        for(int i = 0; i < v.size(); i++)
        {
            if(input == v[i].first)
            {
                input = v[i].second;
                inTable = true;
                break;
            }
        }
        
        if(!inTable)
        {
            char tail = input.back();
            int tailIdx = input.size()-1;
            if((input[tailIdx-1] != 'a' && input[tailIdx-1] != 'e' && input[tailIdx-1] != 'i' && input[tailIdx-1] != 'o' && input[tailIdx-1] != 'u') && tail == 'y')
            {
                input.pop_back();
                input += "ies";
            }
            else if(tail == 'o' || tail == 's' || tail == 'x' || (input[tailIdx-1] == 's' && tail == 'h') || (input[tailIdx-1] == 'c' && tail == 'h'))
                input += "es";
            else
                input += "s";
        }
        
        cout << input << "\n";
        
    }
    
    return 0;
}

