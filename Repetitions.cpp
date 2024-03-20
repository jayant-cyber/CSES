#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> v32;
#define speed_cin() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define forn(s,e) for(ll i = s; i < e; i++) // i is i and e - is ending

int main(){
    speed_cin();
    string str;
    cin>>str;
    ll substrLength = 1, maxLength = 1;
    forn(1,str.length()) {
        if(str[i]==str[i-1]) substrLength++;
        else substrLength = 1;
        if(substrLength >= maxLength) maxLength = substrLength;
    }
    cout<<maxLength;
    return 0;
}


// Explanation 

// checking every element if it is same or not 
// then taking the maximum between all the substring 