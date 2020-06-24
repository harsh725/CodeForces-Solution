#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define eb  emplace_back
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
bool cmp(ll a,ll b)
{
    return a>b;
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll a[n];
    loop(0,n)
    cin>>a[i];
   
    ll c[m];
    std::vector<ll> b(m) ;
    loop(0,m)
    {cin>>b[i];
        b[i]--;
    }
   
    sort(b.begin(),b.end());
    sort(a,a+n,cmp);
    ll sum=0,size=m;
    loop(0,m)
    sum+=a[i];
    ll x=m,ans=0;
    
    loop(0,m)
    {
        ll count=b[i];
        
        ans=0;
        if(count==0)
        {
            sum+=a[i];
            continue;
        }
        while(count--)
        {
            ans=a[x];
            x++;
            // debug(ans);
            
        }
        sum+=ans;
        
        
        
    }
    
    cout<<sum<<"\n";
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