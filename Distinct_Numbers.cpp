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
    // TimeOut using set
    // int n;
    // cin >> n;
    // unordered_set<int> s;
    // int x;
    // forn(0, n)
    // {
    //     cin >> x;
    //     s.insert(x);
    // }
    // cout << s.size();
    int n;
    cin >> n;
    vector<int> v(n);
    forn(0, n)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    v.resize(distance(v.begin(), unique(v.begin(), v.end())));
    cout << v.size();
    return 0;
}