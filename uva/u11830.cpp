/* u11830.cpp */
#include <bits/stdc++.h>
using namespace std;

int main(){
   
   string N;
   char D;
   while(cin >> D >> N)
   {
        if(D == '0' && N == "0")
            break;
            
        string res = "";
        for(int i = 0; i < N.size(); i++)
        {
            if(N[i] == D)
                continue;
            if(N[i] == '0' && res == "")
                continue;
            res.push_back(N[i]);
        }
        
        if(res == "")
            cout << 0 << "\n";
        else
            cout << res << "\n";
   }
}


