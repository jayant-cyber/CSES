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

long calculateWays(int K) {

    long totalWays = ((long) K * K * (K * K - 1)) / 2;
    long attackingWays = 4 * (K - 1) * (K - 2);
    long ans = totalWays - attackingWays;
    return ans;
}

int main() {
    int N;
    cin>>N;
    forn(0,N) {
        cout << calculateWays(i+1) << " ";
    }
    return 0;
}
