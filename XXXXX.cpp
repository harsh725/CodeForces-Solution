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
    ll n,x;
    cin>>n>>x;
    ll a[n],c=0,flag=0,sum=0;
    loop(0,n)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]%x==0)
        flag++;
    }
    int i,j;
    if(sum%x!=0)
    {
        cout<<n<<"\n";
        return ;
    }
    if(flag==n)
    {
        cout<<"-1\n";return ;
    }
    
    for(i=0;i<n;i++)
    if(a[i]%x!=0)
    break;
    i=n-i-1;
    for(j=n-1;j>=0;j--)
    if(a[j]%x!=0)
    break;
    
int ans=max(i,j);
    if(ans==0)
    ans=-1;
    cout<<ans<<"\n";
    
    
    
    
    
    
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