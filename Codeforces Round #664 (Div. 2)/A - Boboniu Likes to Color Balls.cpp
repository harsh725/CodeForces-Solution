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

void solve()
{
    ll c=0;
    ll a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    loop(0,4)
    {
        ll x=a[i];
        if(x%2==1)
        c++;
    }
    if(c<=1)
    {
        cout<<"YES\n";return ;
    }
    if((a[0]*a[1]*a[2])!=0)
    {
        a[0]--;a[1]--;a[2]--;a[3]+=3;
        c=0;
        loop(0,4)
    {
        ll x=a[i];
        if(x%2==1)
        c++;
    }
    if(c<=1)
    {
        cout<<"YES\n";return;
    }
        
    }
    cout<<"NO\n";
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


