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
 
void solve()
{
    ll a,b,flag=0,n;
    cin>>a>>b>>n;
    if (a<=b)
    flag=1;
    ll c=0;
    while(a<=n && b<=n)
    {
        if(flag%2==1)
        {
            a+=b;
            c++;
            flag++;
        }
       else if(flag%2==0)
       {b+=a;
        c++;
        flag++;
    }
        
    }
    
    cout<<c<<"\n";
    
    
    
    
    
    
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
 