/* u11827.cpp */
#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    while(a != 0)
    {
        b %= a;
        
        int tmp = b;
        b = a;
        a = tmp;
    }
    return b;
}

int main(){
   
   int T;
   char eat;
   cin >> T;
   string line;
   getline(cin, line);
   while(T--)
   {
       vector<int> vec ;
       int val;
       
        getline(cin, line);
        stringstream ss(line);
         
        while (ss >> val){
            vec.push_back(val);
        }
       
       int m = 1;
       for(int i = 0; i < vec.size(); i++)
       {
           for(int j = i + 1; j < vec.size(); j++)
           {
               int g = GCD(vec[i], vec[j]);
               m = max(m, g);
           }
       }
       
       cout << m << "\n";
   }
}
