/* u11483.cpp */
#include <bits/stdc++.h>

using namespace std;

void frontCode()
{
    cout << "#include<string.h>\n#include<stdio.h>\nint main()\n{\n";
}

void backCode()
{
    cout << "printf(\"\\n\");\nreturn 0;\n}\n";
}

int main()
{
    int N, k = 0;
    while(cin >> N)
    {
        if(N == 0)
            break;
        
        string input;
        getline(cin, input);
        
        cout << "Case " << ++k << ":\n";
        frontCode();
        while(N--)
        {
            getline(cin, input);
            
            for(int i = 0; i < input.size(); i++)
            {
                if(input[i] == '\"')
                {
                    input.insert(i, "\\");
                    i += 1;
                }
                if(input[i] == '\\')
                {
                    input.insert(i, "\\");
                    i += 1;
                }
            }
            
            cout << "printf(\"";
            cout << input;
            cout << "\\n\");\n";
        }
        backCode();
    }

    return 0;
}


