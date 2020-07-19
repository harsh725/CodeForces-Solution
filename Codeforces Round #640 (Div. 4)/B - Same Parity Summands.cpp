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
    ll c=0, n,k;
    cin>>n>>k;
    if(n<k  || (n%2==1 and k%2==0))
    {
        cout<<"NO\n";return ;
    }
    ll x=k-1;
    if((n-x)%2==1)
    {
        cout<<"YES\n";
        k--;
        while(k--)cout<<"1 ";
        cout<<n-x<<"\n";
    }
    else
    {
        n=n-(2*x);
        if(n<2 || n%2==1)
        {
            cout<<"NO\n";return ;
        }
        cout<<"YES\n";
        while(x--)cout<<"2 ";
        cout<<n<<"\n";
    }
    // if(n==k)
    // {
    //     cout<<"YES\n";
    //     while(n--)
    //     cout<<"1 ";
    //     cout<<"\n";return ;
    // }
    
    // ll x=n%2;
    // if(x==0)
    // x=2;
    
    // k--;
    // n=n-(x*k);
    // if(n<0)
    // {
    //     cout<<"NO\n";return ;
    // }
    // else
    // cout<<"YES\n";
    // while(k--)
    // cout<<x<<" ";
    // cout<<n<<"\n";
    
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