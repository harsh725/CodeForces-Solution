#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MOD = 1e9 + 7;

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ans =0;
    if(n<=k)
    {
         ans = (n*(n-1))/2;
         ans+=1;
    }
    else
    {
         ans = (k*(k+1))/2;
    }
    cout<<ans<<"\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

