/* u11541.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, k = 0;
    
    cin >> T;
    string input;
    getline(cin, input);
    while(T--)
    {
        char ch;
        int n;
        
        getline(cin, input);
        stringstream ss{input};
        
        printf("Case %d: ", ++k);
        while(ss >> ch >> n)
        {
            for(int i = 0; i < n; i++)
                putchar(ch);
        }
        putchar('\n');
    }
    return 0;
}


