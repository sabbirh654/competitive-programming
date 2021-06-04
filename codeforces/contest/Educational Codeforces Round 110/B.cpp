#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

typedef long long ll;

ll a[N];

void solve()
{
    int n, m, x, y;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    ll ans = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            int x = __gcd(a[i] * 2, a[j]);
            int y = __gcd(a[j] * 2, a[i]);
            if(x > 1 || y > 1)
                ans++;
        }
    }
    cout << ans << "\n";
}

int main()
{
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

