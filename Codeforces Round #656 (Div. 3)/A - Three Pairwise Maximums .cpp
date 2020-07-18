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
    ll x,y,z,a,b,c;
    cin>>x>>y>>z;
    
    if(x!=y && y!=z && x!=z )
    {
        cout<<"NO\n";return ;
    }
    ll m=min(x,min(y,z));
    c=0;
    if(x==m)
    c++;
    if(y==m)
    c++;
    if(z==m)
    c++;
    
    if(c==2)
    {
        cout<<"NO\n";
        return ;
    }
    if(c==3)
    {
        cout<<"YES\n"<<x<<" "<<y<<" "<<z<<"\n";
    }
    else
    {
        z=m-1;
        if(z==0)
        z=1;
        cout<<"YES\n"<<m<<" "<<z<<" "<<max(x,y)<<"\n";
    }
    
    
    
    
    
    
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