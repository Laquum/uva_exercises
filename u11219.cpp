/* u11219.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int D1, M1, Y1, D2, M2, Y2;
    
    int T, K = 0;
    
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d/%d/%d", &D1, &M1, &Y1);
        scanf("%d/%d/%d", &D2, &M2, &Y2);
        
        long long int days1 = D1 + M1 * 30 + Y1 * 365;
        long long int days2 = D2 + M2 * 30 + Y2 * 365;
        
        long long int dayDiff = days1 - days2;
        
        int years = dayDiff / 365;
        
        bool valid = true;
        if(dayDiff < 0)
            valid = false;
        
        printf("Case #%d: ", ++K);
        if(!valid)
            printf("Invalid birth date\n");
        else
        {
            if(years > 130)
                printf("Check birth date\n");
            else
                printf("%d\n", years);
        }
    }
    return 0;
}
