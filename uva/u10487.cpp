/* u10487.cpp */
/* it works on zerojudge but not uva online judge, IDKY... */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k = 0;
    int val;

    while(cin >> n)
    {
        if(n == 0)
            break;

        vector<int> inputs, query, ans;
        for(int i = 0; i < n; i++)
        {
            cin >> val;
            inputs.push_back(val);
        }
        cin >> m;
        for(int i = 0; i < m; i++)
        {
            cin >> val;
            query.push_back(val);

            int diff = 10000, retSum;
            for(int j = 0; j < inputs.size() - 1; j++)
            {
                for(int k = j + 1; k < inputs.size(); k++)
                {
                    int sum = inputs[j] + inputs[k];
                    if(abs(sum - val) < diff)
                    {
                        diff = abs(sum - val);
                        retSum = sum;
                    }
                }
            }
            ans.push_back(retSum);
        }

        cout << "Case " << ++k << ":\n";
        for(int i = 0; i < m; i++)
        {
            printf("Closest sum to %d is %d.\n", query[i], ans[i]);
        }

    }

    return 0;
}
