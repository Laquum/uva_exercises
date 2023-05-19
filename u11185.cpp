
/* u11185.cpp */
#include <bits/stdc++.h>

using namespace std;

void toBase3(long long int *n)
{
    if(*n == 0)
        return;
    long long int r = (*n) % 3;
    *n /= 3;
    toBase3(n);
    cout << r;
}

int main()
{
    long long int N;
    
    while(cin >> N)
    {
        if(N < 0)
            break;
        
        if(N == 0)
            cout << 0;
        else
            toBase3(&N);
        cout << "\n";
    }
    return 0;
}
