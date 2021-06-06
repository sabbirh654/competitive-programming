#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int mark = -1;
        for(int i = 0; i < n; i++)
        {
            int x = 0, y = 0, j;
            for(j = i; j < n; j++)
            {
                if(s[j] != s[i])
                    break;
            }
            for(int k = 0; k < i; k++) {
                if(s[k] == 'L') x--;
                if(s[k] == 'R') x++;
                if(s[k] == 'U') y++;
                if(s[k] == 'D') y--;
            }
            for(int k = j; k < n; k++) {
                if(s[k] == 'L') x--;
                if(s[k] == 'R') x++;
                if(s[k] == 'U') y++;
                if(s[k] == 'D') y--;
            }
            if(x == 0 && y == 0) {
                mark = i;
                break;
            }
        }
        if(mark == -1)
            cout << "0 0\n";
        else {
            int x = 0, y = 0;
            for(int k = 0; k <= mark; k++) {
                if(s[k] == 'L') x--;
                if(s[k] == 'R') x++;
                if(s[k] == 'U') y++;
                if(s[k] == 'D') y--;
            }
            cout << x << " " << y << "\n";
        }
    }
}
