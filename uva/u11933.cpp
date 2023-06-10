/* u11933.cpp */
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

string toBinary(long long int val)
{
    string res = "";
    while(val != 0)
    {
        res.push_back((val % 2) + '0');
        val /= 2;
    }
    
    return res;
}

long long int toInt(string s)
{
    long long int res = 0;
    for(int i = 0 ; i < s.size(); i++)
    {
        res += (pow(2, i) * (s[i] - '0'));
    }
    
    return res;
}

int main()
{
    int n;
    while(cin >> n)
    {
        if(n == 0)
            break;
        string bin = toBinary(n);
        
        string a = "";
        string b = "";
        bool odd = true;
        for(int i = 0; i < bin.size(); i++)
        {
            if(bin[i] == '1')
            {
                if(odd)
                {
                    a.push_back('1');
                    b.push_back('0');
                    odd = false;
                }
                else
                {
                    b.push_back('1');
                    a.push_back('0');
                    odd = true;
                }
                continue;
            }
            a.push_back('0');
            b.push_back('0');
        }
        
        long long int a_val = toInt(a);
        long long int b_val = toInt(b);
        
        cout << a_val << " " << b_val << "\n";
    }

    return 0;
}
