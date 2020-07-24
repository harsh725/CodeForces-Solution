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
    ll n;cin>>n;
    
    std::vector<ll> ans,v(n);
    loop(0,n)
    cin>>v[i];
    ans.emplace_back(v[0]);
    bool flag=0;
    if(v[0]>v[1])
    flag=1;
    ll mi=0,ma=0;
    loop(1,n-1)
    {
        if(v[i]>v[i-1])
        {
            ma=v[i];
            if(mi!=0)
            {
                ans.emplace_back(mi);
            }
            mi=0;
            
        }
        if(v[i]<v[i-1])
        {
            mi=v[i];
            if(ma!=0)
            {
                ans.emplace_back(ma);
            }
            ma=0;
        }
        // debug(ans.size());
        
    }
    if(ma and v[n-1]<v[n-2])ans.emplace_back(ma);
    if(mi and v[n-1]>v[n-2])ans.emplace_back(mi);
    ans.emplace_back(v[n-1]);
    
    cout<<ans.size()<<"\n";
    for(ll i:ans)
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
