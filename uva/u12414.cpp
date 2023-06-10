/* u12414.cpp */
/* brute force hehehe */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    
    while(cin >> input)
    {
        int ST;
        for(ST = 1; ST <= 10000; ST++)
        {
            string numSeq = "";
            for(int i = 0; i < input.size(); i++)
            {
                int val = input[i] - 'A' + ST;
                numSeq += to_string(val);
            }
            
            while(numSeq != "100" && numSeq.size() != 2)
            {
                for(int i = 0; i < numSeq.size() - 1; i++)
                    numSeq[i] = (numSeq[i] + numSeq[i + 1] - '0' - '0') % 10 + '0';
                numSeq.pop_back();
            }
            
            if(numSeq == "100")
                break;
        }
        
        if(ST > 10000)
            cout << ":(\n";
        else
            cout << ST << "\n";
    }
    return 0;
}

