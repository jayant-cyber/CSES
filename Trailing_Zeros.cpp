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
    ll n,count=0;
    cin>>n;
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
    cout<< count;
    return 0;
}