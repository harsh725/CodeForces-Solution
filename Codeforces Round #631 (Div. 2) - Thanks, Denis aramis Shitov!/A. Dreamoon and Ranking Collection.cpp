#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define eb  emplace_back
#define loop(a,n) for(ll i=a;i<n;i++)
#define debug(x)  cout<<#x<<" "<<x<<"\n";
#define mod 1e9+7
#define setbits(x)  __builtin_popcountll(x)
#define digits(a,x)  a=floor(log10(x)) + 1


bool ispower2(ll n)
{
    
    return n && (!(n&(n-1)));
}
void solve()
{
    ll k,n,temp;
    cin>>n>>k;
    std::vector<ll> v(255,0);
    loop(0,n)
    {
        cin>>temp;
        v[temp]++;
    }
    int i;
    for(i=1;i<=250;i++)
    {
        if(k==0 && v[i]==0)
        break;
        if(v[i]==0)
        k--;
    }
    cout<<i-1<<"\n";
    
    
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

