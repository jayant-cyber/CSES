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
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        string ans;
        cin >> a >> b;
        // piles are empty
        if (a == 0 && b == 0)
            ans = "YES";
        else if (a == 0 || b == 0) // if any one pile is empty
            ans = "NO";
        else if (a >= (a + b) / 3 && b >= (a + b) / 3) // each pile should be greater than 1/3(2+1) of the total
        {
            if ((a + b) % 3 == 0) // it should be divisible / 3 (2+1)
                ans = "YES";
            else
                ans = "NO";
        }
        else
            ans = "NO";
        cout << ans << endl;
    }
    return 0;
}

// Explantion

// if coin pile have to be empty then the total should be divisible by (2+1)
// and both pile should have more than 1/3 of the total