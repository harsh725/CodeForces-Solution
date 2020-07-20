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
    ll n,p;
    cin>>n>>p;
    // std::set<ll>s ;
      std::map<ll, ll> m;
      loop(0,n)
      {
          ll x,y;
          cin>>x>>y;
          m[x]+=y;
        //   s.insert(x);
          
      }
      ll sum=0;
      loop(1,3002)
      {
          
          if(m[i-1]>0)
          {
              sum+=min(m[i-1],p);
              if(m[i-1]<p)
              {
                  sum+=min(m[i],p-m[i-1]);
                  m[i]-=min(m[i],p-m[i-1]);
              }
          }
          else if(m[i]>0)
          {
              sum+=min(m[i],p);
              m[i]-=min(m[i],p);
              
          }
        //   debug(sum);
      }
      cout<<sum<<"\n";
       
    
    
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