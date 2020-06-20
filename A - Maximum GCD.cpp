#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define eb  emplace_back
#define loop(a,n) for(ll i=0;i<n;i++)
#define debug(x)  cout<<#x<<" "<<x<<"\n";
#define mod 1e9+7
#define setbits(x)  __builtin_popcountll(x)
#define digits(a,x)  a=floor(log10(x)) + 1

bool prime(ll s);
ll power(ll x, ll y) ;


ll highestPowerof2(ll n) 
{ 
    ll res = 0; 
    for (ll i=n; i>=1; i--) 
    { 
        // If i is a power of 2 
        if ((i & (i-1)) == 0) 
        { 
            res = i; 
            break; 
        } 
    } 
    return res; 
} 
void solve()
{
    ll n,c=1;
    cin>>n;
    
    if(n%2==0)
    {
        cout<<__gcd(n,n/2)<<"\n";return ;
    }
    
    ll r=n-1;
    cout<<__gcd(r,r/2)<<"\n";
    
    
    
    
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    ll t;cin>>t;
    // int t=1;
    while(t--)
    {
        solve();
    }
    
    return 0;
}



bool prime(ll s)
{
    if (s <= 1)  return false;
    if (s <= 3)  return true;
    if (s%2 == 0 || s%3 == 0) return false;

    for (ll i=5; i*i<=s; i=i+6)
        if (s%i == 0 || s%(i+2) == 0)
           return false;

    return true;
}

ll power(ll x, ll y) 
{ 
    ll temp; 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return temp*temp; 
    else
        return x*temp*temp; 
} 