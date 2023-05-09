/* u11498.cpp */
/* It become faster after replacing all of the cin and cout to 
 * scanf and printf. Crazy!!! */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int K;
    
    while(scanf("%d", &K) == 1)
    {
        int N, M, X, Y;
        scanf("%d%d", &N, &M);
        while(K--)
        {
            scanf("%d%d", &X, &Y);
            X -= N;
            Y -= M;
            
            if(X < 0 && Y > 0)
                printf("NO\n");
            else if(X > 0 && Y > 0)
                printf("NE\n");
            else if(X < 0 && Y < 0)
                printf("SO\n");
            else if(X > 0 && Y < 0)
                printf("SE\n");
            else
                printf("divisa\n");
        }
    }
    return 0;
}


