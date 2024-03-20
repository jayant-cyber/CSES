#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> v32;
#define speed_cin() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define forn(s,e) for(ll i = s; i < e; i++) // i is i and e - is ending

int main(){
    speed_cin();
    ll num;
    cin>>num;
    ll sum = 0,a;
    forn(0,num-1) {
        cin>>a;
        sum+=a;
    }
    cout<< (num*(num+1))/2 - sum;
    return 0;
}


// explanation 
// we know sum of n number is Sn = n(n+1)/2
// so missing number should be Sn - sum of given number 