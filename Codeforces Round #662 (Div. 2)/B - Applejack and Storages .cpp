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
    ll n;cin>>n;
    ll sq=0,rc=0;
    map<ll, ll> m ;
    loop(0,n)
    {
        ll x;cin>>x;
        m[x]++;
        // if(m[x]%4==0)
        // {sq++;rc--;}
        // else if(m[x]%2==0)
        // rc++;
        
    }
    for(auto i:m)
    {
        if(i.ss>=4)
        {sq+=(i.ss/4);
            if(i.ss%4>=2)
            rc++;
        }
        else if(i.ss>=2)
        rc++;
    }
    
    ll q;cin>>q;
    while(q--){
        char c;
        ll x;cin>>c>>x;
        if(c=='+')
        {
            m[x]++;
            if(m[x]%4==0)
            {
                sq++;rc--;
            }
            else if(m[x]%2==0)
            rc++;
            
            
        }
        else
        {
            // m[x]--;
            if(m[x]%4==0)
            {sq--;rc++;}
            else if(m[x]%2==0)
            rc--;
            m[x]--;
        }
        
			if(sq>=2 or (sq>=1 and rc>=2))
			{
				cout<<"YES\n";
			}
			else
				cout<<"NO\n";

        
        
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    ll t=1;
    // cin>>t;

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