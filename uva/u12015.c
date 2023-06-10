/* u12015.c */
#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
    return (a > b)?a:b;
}

int main()
{
    int T;
    char url[10][50];
    int rel[10];
    int k = 0;
    
    scanf("%d", &T);
    while(T--)
    {
        int i = 0;
        int maxVal = 0;
        
        for(; i < 10; i++)
        {
            scanf("%s %d", url[i], &rel[i]);
            maxVal = max(maxVal, rel[i]);
        }
        
        printf("Case #%d:\n", ++k);
        for(i = 0; i < 10; i++)
        {
            if(rel[i] == maxVal)
                printf("%s\n", url[i]);
        }
        
    }

    return 0;
}

