/* u10499.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;

    while(scanf("%lld", &n) == 1)
    {
        if(n < 0)
            break;

        if(n <= 1)
            printf("0%%\n");
        else
            printf("%lld%%\n", n * 25);
    }
    return 0;
}
