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

ll mod_pow(ll x, ll n)
{
    if (n == 0)
        return 1;
    return n & 1 ? (x * mod_pow((x * x) % MOD, n >> 1)) % MOD : mod_pow((x * x) % MOD, n >> 1) % MOD;
}

int main()
{
    speed_cin();
    ll n;
    cin >> n;
    cout << mod_pow(2, n);
    return 0;
}

//Explantion 

//if 2^0 retrun 1 
//n%1 chechks the lest significant digit is one or not (is odd or even if 0110 is even 0111 is always odd)

// If `n` is odd (`n & 1` evaluates to true), it calculates x  multiplied by x^(n-1)/2 modulo `MOD`. This is done by recursively calling `mod_pow` with x^2 modulo `MOD` and (n-1)/2

// If `n` is even, it calculates x^n/2 modulo `MOD` by recursively calling `mod_pow` with x^2 modulo `MOD` and n/2

// In both cases, the result is taken modulo `MOD` to ensure that the result remains within the range of the modulo operation.

// By using recursion and the exponentiation by squaring technique, this function efficiently calculates x^n modulo `MOD`. It reduces the number of multiplications required by dividing the exponent by 2 in each recursive call. This results in a time complexity of O(log n).
