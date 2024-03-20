#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> v32;
typedef vector<ll> v64;
#define speed_cin()                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define forn(s, e) for (ll i = s; i < e; i++) // i is i and e - is ending

int main()
{
    speed_cin();
    ll n;
    cin >> n;
    v64 v(n);
    forn(0, n) cin >> v[i];
    ll count = 0;
    forn(1, n)
    {
        if (v[i] < v[i - 1])
        {
            count += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }
    cout << count;
    return 0;
}

// Explantuion 

// if the previous element is lager than the current element then count += differnce between them 
// 5 4 6 2 1 
// 5>4 so count should be increse by 1 which is 5-4=1 then change 4 to 5
// 5!>6 so no count
// 6>2 so count should be incresce by 6-2=4 so count 1+4 change 2 to 6
// 6>1 so count should be increse by 6-1=5 so count 1+4+5 
// arrayy ended 
// Total count is 1+4+5 = 10