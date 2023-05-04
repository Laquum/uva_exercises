
/* u11661.cpp */
/* ugly but it works properly www */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string road;
    int L;
    while(cin >> L)
    {
        if(L == 0)
            break;
        cin >> road;
        
        int length = 2000005;
        for(int i = 0; i < L; i++)
        {
            if(road[i] == 'Z')
            {
                length = 0;
                break;
            }
            
            if(road[i] == 'R')
            {
                int temp = 0;
                for(int j = i + 1; j < L; j++)
                {
                    temp++;
                    if(road[j] == 'R' || road[j] == 'Z')
                    {
                        i = j-1;
                        break;
                    }
                    if(road[j] == 'D')
                    {
                        length = min(length, temp);
                        i = j-1;
                        break;
                    }
                }
            }
            
            if(road[i] == 'D')
            {
                int temp = 0;
                for(int j = i + 1; j < L; j++)
                {
                    temp++;
                    if(road[j] == 'D'  || road[j] == 'Z')
                    {
                        i = j-1;
                        break;
                    }
                    if(road[j] == 'R')
                    {
                        length = min(length, temp);
                        i = j-1;
                        break;
                    }
                }
            }
        }
        
        cout << length << "\n";
    }
    return 0;
}


