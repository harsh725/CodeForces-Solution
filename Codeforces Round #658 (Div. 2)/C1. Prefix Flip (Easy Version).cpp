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
    ll n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    std::vector<ll> v;
    loop(0,n)
    {
        if(s[n-1-i]!=t[n-1-i])
        {
            if(s[0]==t[n-1-i])
            v.emplace_back(1);
            
            v.emplace_back(n-i);
            
            std::reverse(s.begin(),s.begin()+n-i);
            for(ll j=0;j<n-i;j++)
            {
                if(s[j]=='1')
                s[j]='0';
                else
                s[j]='1';
            }
            
    }
    }
    cout<<v.size()<<" ";
    for(ll i:v)
    cout<<i<<" ";
    
    cout<<"\n";
    
    
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