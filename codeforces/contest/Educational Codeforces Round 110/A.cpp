#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

typedef long long ll;

ll a[N], b[N];

void solve()
{
    int n, m, x, y;
    for(int i = 0; i < 4; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + 4);
    x = max(a[0], a[1]);
    y = max(a[2], a[3]);
    if((x == b[3] || x == b[2]) && (y == b[3] || y == b[2]))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
