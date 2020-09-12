#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define eb  emplace_back
#define all(x) x.begin(),x.end()
#define loop(a,n) for(ll i=a;i<n;i++)
#define debug(x)  cout<<#x<<" "<<x<<"\n";
#define mod 1e9+7
#define setbits(x)  __builtin_popcountll(x)
#define digits(a,x)  a=floor(log10(x)) + 1
#define ss second
#define ff first

bool prime(ll s);
ll power(ll x, ll y) ;
bool cmp(ll a, ll b)
{
    return a>b;
}
bool ispower2(ll n)
{
    
    return n && (!(n&(n-1)));
}
void solve()
{
    ll n;
    cin>>n;
    std::vector<ll> v(n) ;
    loop(0,n)cin>>v[i];
    
    sort(all(v));
    ll ans1=v[0]*v[1]*v[n-1]*v[n-2]*v[n-3];
    ll ans3=v[0]*v[1]*v[n-1]*v[2]*v[3];
    ll ans2=v[n-5]*v[n-4]*v[n-1]*v[n-2]*v[n-3];
    
    cout<<max(ans2,max(ans3,ans1))<<"\n";
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    ll t=1;
    cin>>t;

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