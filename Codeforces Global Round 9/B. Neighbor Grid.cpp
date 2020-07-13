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
    ll temp,n,m;
    cin>>n>>m;
    int a[n][m];
    loop(0,n)
    {
        for(ll j=0;j<m;j++)
        {
            if(i==0 || i==n-1)
            {
                if(j==0 || j==m-1)
                a[i][j]=2;
                else
                a[i][j]=3;
            }
            else if(j==0 || j==m-1)
            {
                
                a[i][j]=3;
            }
            else
            a[i][j]=4;
            
            
        }
    }
    bool flag=0;
    loop(0,n)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>temp;
            if(temp>a[i][j])
            flag=1;
        }
    }
    if(flag)
    cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        loop(0,n)
        {for(ll j=0;j<m;j++)
        cout<<a[i][j]<<" ";
            cout<<"\n";
        }
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