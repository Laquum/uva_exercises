/* u11777.cpp */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    int k = 0;
    double T1, T2, F, A , C;
    double Cav;
    
    cin >> T;
    while(T--)
    {
        cin >> T1 >> T2 >> F >> A ;
        vector<double> vec;
        for(int i = 0; i < 3; i++)
        {
            double C;
            cin >> C;
            vec.push_back(C);
        }
        
        sort(vec.begin(), vec.end());
        Cav = (vec[1] + vec[2])/2;
        
        double score = T1+T2+F+A+Cav;
        
        cout << "Case " << ++k << ": ";
        if(score >= 90.0)
            cout << "A\n";
        else if(score >= 80.0)
            cout << "B\n";
        else if(score >= 70.0)
            cout << "C\n";
        else if(score >= 60.0)
            cout << "D\n";
        else
            cout << "F\n";
    }
    
    return 0;
}


