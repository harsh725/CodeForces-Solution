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
    ll r=0,c=0,n,k;
    cin>>n>>k;
    short a[n][n];
    loop(0,n)
    {
        for(ll j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
    
    loop(0,k)
    {
        a[r][c]=1;
        r++;
        c=(c+1)%n;
        
        if(r==n)
        {
            r=0;
            c=(c+1)%n;
        }
    }
    if(k%n==0)
    cout<<"0\n";
    else
    cout<<"2\n";
    loop(0,n)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    
    
    
    
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