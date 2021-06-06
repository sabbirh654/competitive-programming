#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ll n, k, m, two = 0, five = 0;
    cin >> n >> k;
    m = n;
    while(m % 2 == 0) {
        two++;
        m /= 2;
    }
    while(m % 5 == 0) {
        five++;
        m /= 5;
    }
    ll ans = n;
    if(five <= k) {
        for(int i = 0; i < k - five; i++)
            ans *= 5ll;
    }
    if(two <= k) {
        for(int i = 0; i < k - two; i++)
            ans *= 2ll;
    }
    cout << ans << "\n";
}
