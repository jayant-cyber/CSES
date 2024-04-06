#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> v32;
typedef vector<ll> v64;

ll MOD = 1e9 + 7;

#define speed_cin()                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define forn(s, e) for (ll i = s; i < e; i++) // i is i and e - is ending

int main()
{
    speed_cin();
    ll n, x;
    cin >> n >> x;
    v32 p(n);
    forn(0, n) cin >> p[i];
    sort(p.begin(), p.end());   //sorting the vector
    ll l = 0, r = n - 1, g = 0;  // left right and gondallas
    while (l <= r)
    {
        if (p[r] > x)           // eleminating the overweight child
        {
            r--;
            continue;
        }
        if (p[l] + p[r] <= x)
        {
            g++;
            l++;
            r--;
        }
        else
        {
            r--;
            g++;
        }
    }
    cout << g;
    return 0;
}