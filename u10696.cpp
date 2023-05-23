/* u10696.cpp */
#include <bits/stdc++.h>

using namespace std;

int f91(int N)
{
    int k;
    if( N <= 100)
    {
        k = f91(f91(N+11));
    }
    else if(N >= 101)
    {
        k = N - 10;
    }

    return k;
}

int main()
{
    int N;

    while(cin >> N)
    {
        if(N == 0)
            break;

        int ans = f91(N);

        printf("f91(%d) = %d\n", N, ans);
    }

    return 0;
}

