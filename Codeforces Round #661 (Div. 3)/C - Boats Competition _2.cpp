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
    ll n,x=INT_MAX,y=INT_MIN;
    cin>>n;
    ll a[n];
    loop(0,n)
    {
        cin>>a[i];
    }
    ll ans=0;
    loop(2,2*n+1)
    {
        map<ll,ll> m;
        for(ll x:a)
        m[x]++;
        
        ll res=0;
        for(auto x:m)
        {
            ll value=x.first;
            ll temp=i-value;
            if(temp<=0)
            continue;
            if(m.find(temp)!=m.end())
            {
                if(value==(temp))
                {  
                    res+=(x.second/2);
                    
                }
                else
                {
                    if((min(m[value],m[temp])==1))
                    res+=1;
                    else
                    res+=(min(m[value],m[temp]));
                    m[value]=0;
                }
            //  m[value]=0;
            //  m[temp]=0;
            }
        }
        m.clear();
        ans=max(res,ans);
    }
    cout<<ans<<"\n";
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