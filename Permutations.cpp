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
    if (!(n == 3 || n == 2 || n == 4))
    {
        if (n % 2 == 0)
        {
            for (ll i = n; i >= 1; i -= 2)
                cout << i << " ";
            for (ll i = n - 1; i >= 1; i -= 2)
                cout << i << " ";
        }
        else
        {
            for (ll i = n - 1; i >= 1; i -= 2)
                cout << i << " ";
            for (ll i = n; i >= 1; i -= 2)
                cout << i << " ";
        }
    }
    else if (n == 4)
    {
        cout << "2 4 1 3";
    }
    else
        cout << "NO SOLUTION";
    return 0;
}

// explation 

// their are 4 cases permution is differnt so 
// 1 is a solution 
// 2 , 3 it has no solution 
// 4 has only 2 solution 2 4 1 3 , 3 1 4 2 
