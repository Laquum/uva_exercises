 /* u10813.cpp */
#include <bits/stdc++.h>

using namespace std;

bool win(vector<vector<int>>& v)
{
    for(int i = 0; i <5; i++)
    {
        if(!v[i][0] && !v[i][1] && !v[i][2] && !v[i][3] && !v[i][4])
            return true;
    }

    for(int j = 0; j <5; j++)
    {
        if(!v[0][j] && !v[1][j] && !v[2][j] && !v[3][j] && !v[4][j])
            return true;
    }

    if(!v[0][0] && !v[1][1] && !v[3][3] && !v[4][4])
        return true;

    if(!v[0][4] && !v[1][3] && !v[3][1] && !v[4][0])
        return true;

    return false;
}
int main()
{
    int n, val;

    cin >> n;
    while(n--)
    {
        vector<vector<int>> v(5);

        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                if(i == 2 && j == 2)
                {
                    v[i].push_back(0);
                    continue;
                }
                cin >> val;
                v[i].push_back(val);
            }
        }

        bool announced = false;
        bool findWinner = false;
        for(int k = 1; k <= 75; k++)
        {
            cin >> val;

            if(!announced)
            {
                for(int i = 0; i < 5; i++)
                {
                    for(int j = 0; j < 5; j++)
                        if(val == v[i][j])
                            v[i][j] = 0;
                }

                findWinner = win(v);
                if(findWinner)
                {
                    cout << "BINGO after " << k << " numbers announced\n";
                    announced = true;
                }
            }
        }
    }

    return 0;
}
