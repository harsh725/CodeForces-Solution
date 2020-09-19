#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define eb  emplace_back
#define all(x) x.begin(),x.end()
#define loop(a,n) for(ll i=a;i<n;i++)
#define debug(x)  cout<<#x<<" "<<x<<"\n";
#define mod 1e9+7
#define digits(a,x)  a=floor(log10(x)) + 1
#define ss second
#define ff first


ll power(ll x, ll y) ;
bool ispower2(ll n) {return n && (!(n&(n-1)));}
void solve()
{
    ll n,k;
    cin>>n>>k;
    
    ll need=(k-1)/(n-1);
    k+=need;
    cout<<k<<"\n";
    
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