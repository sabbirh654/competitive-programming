#include<bits/stdc++.h>
using namespace std;

int main()
{
    double r, d;
    cin >> r >> d;
    int n; cin >> n;
    int ans = 0;
    while(n--)
    {
        double x, y, rr;
        cin >> x >> y >> rr;
        double cal = sqrt(x*x + y*y);
        if(cal - rr>= r-d && cal + rr <= r)
            ans++;
    }
    cout << ans;
}
