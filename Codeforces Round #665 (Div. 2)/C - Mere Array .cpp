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

bool prime(ll s);
ll power(ll x, ll y) ;

bool ispower2(ll n)
{
    
    return n && (!(n&(n-1)));
}
void solve()
{
    ll l=INT_MAX,n;cin>>n;
    std::vector<ll> v(n) ;
    loop(0,n){cin>>v[i];
        l=min(l,v[i]);
    }
    
    vector<ll> temp(n);
    loop(0,n)
    temp[i]=v[i];
    
    sort(all(temp));
    // cout<<"CHECK";
    vector<ll> x;
    loop(0,n)
    {   
        // cout<<v[i];
        if(temp[i]!=v[i])
            x.emplace_back(v[i]);
        
    }
    if(x.size()==0)
    {
        cout<<"YES\n";return;
    }
    bool flag=1;
    sort(all(x));
    ll g=__gcd(x[0],l);
    if(g!=l)
    flag=0;
    for(ll i=1;i<x.size();i++)
    {
        g=__gcd(g,x[i]);
        if(g!=l)
        flag=0;
    }
    
    
    if(flag)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    
    
    
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