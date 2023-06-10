/* u1585 */
#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    char input[85];
    while(T--)
    {
        scanf("%s", input);
        int i = 0;
        int accum = 0, score = 0;
        for(; input[i] != '\0'; i++)
        {
            if(input[i] == 'O')
                accum += 1;
            else
                accum = 0;
            score += accum;
        }
        printf("%d\n", score);
    }
    return 0;
}

