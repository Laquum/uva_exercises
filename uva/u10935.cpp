/* u11935.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        if(n == 0)
            break;
        
        deque<int> d;
        for(int i = 1; i <= n; i++)
        {
            d.push_front(i);
        }
        
        vector<int> dis;
        while(d.size() > 1)
        {
            dis.push_back(d.back());
            d.pop_back();
            d.push_front(d.back());
            d.pop_back();
        }
        
        cout << "Discarded cards:";
        for(int i = 0; i < dis.size(); i++)
        {
            cout << " " << dis[i];
            if(i != dis.size()-1)
                cout << ",";
        }
        cout << "\n";
        
        cout << "Remaining card: " << d.front() << "\n";
    }

    return 0;
}
