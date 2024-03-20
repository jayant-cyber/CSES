#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define speed_cin() ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    speed_cin();
    ll num;
    cin>>num;
    cout<<num<<" ";
    while(num!=1){
        if(num%2) num= num*3 + 1;
        else num /= 2;
        cout<<num<<" ";
    }
    return 0;
}