#include <bits/stdc++.h>

using namespace std;

int high_man(vector<int> v)
{
    stack<int> stk;
    vector<int> diff(v.size());
    
    stk.push(0); // the highest will never pop
    for(int i = 1; i < v.size(); ++i)
    {
        while(v[i] >= v[stk.top()])
        {
            stk.pop();
        }
        diff[i] = i - stk.top();
        stk.push(i);
    }
    diff[0] = 0;

    int sum = 0;
    for(int i = 0; i < diff.size(); ++i)
        sum += diff[i];
        
    return sum;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    vector<int> v(N+1);
    v[0] = 99999;
    for(int i = 1; i <= N; ++i)
        cin >> v[i];
    
    cout << high_man(v) << "\n";
    
    return 0;
}
