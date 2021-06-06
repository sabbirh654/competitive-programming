#include<bits/stdc++.h>
using namespace std;

const int N = 2005;
int a[N], b[N];
bool mp[2000009];

int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]] = 1;
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        mp[b[i]] = 1;
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int x = a[i] ^ a[j];
            if(x <= 2000000 && mp[x])
                cnt++;
        }
    }
    if(cnt % 2)
        puts("Koyomi");
    else
        puts("Karen");
}
