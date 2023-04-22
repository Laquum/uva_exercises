/* u10409.cpp */

#include <iostream>
#include <string>
using namespace std;

// idx 0 1 2 3 for n e s w
char Tn[4] = {'N', 'E', 'S', 'W'}; // top next state
char Nn[4] = {'B', 'N', 'T', 'N'};
char Wn[4] = {'W', 'T', 'W', 'B'};
char Bn[4] = {'S', 'W', 'N', 'E'};
char Sn[4] = {'T', 'S', 'B', 'S'};
char En[4] = {'E', 'B', 'E', 'T'};

int main()
{
    int N;
    string s;
    int move;
    while(cin >> N)
    {
        if(N == 0)
            break;
        char die[4] = {'X', 'T', 'N', 'W'};
        while(N--)
        {
            cin >> s;
            if(s.compare("north") == 0)
                move = 0;
            else if(s.compare("east") == 0)
                move = 1;
            else if(s.compare("south") == 0)
                move = 2;
            else
                move = 3;
                
            for(int i = 1; i < 4; i++)
            {
                switch(die[i]){
                case 'T':
                    die[i] = Tn[move];
                    break;
                case 'N':
                    die[i] = Nn[move];
                    break;
                case 'W':
                    die[i] = Wn[move];
                    break;
                case 'E':
                    die[i] = En[move];
                    break;
                case 'S':
                    die[i] = Sn[move];
                    break;
                case 'B':
                    die[i] = Bn[move];
                    break;
                }
            }
            
        }
        
        for(int i = 1; i < 4; i++)
            {
                if(die[i] == 'T')
                {
                    printf("%d\n", i);
                    break;
                }
                if(die[i] == 'B')
                {
                    printf("%d\n", (7-i));
                    break;
                }
            }
    }

    return 0;
}

