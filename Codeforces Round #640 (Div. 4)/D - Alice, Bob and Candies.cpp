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
    ll n,l=1,r;
    cin>>n;
    std::vector<ll> v(n);
    loop(0,n)cin>>v[i];
    
    r=n-1;
    ll ca=v[0],cb=0,c=1,eat=v[0],sum=0;
    bool chance=0;
    while(l<=r)
    {   
    sum=0;
        if(chance)
        {
            while(sum<=eat and l<=r)
            {
                sum+=v[l];
                ca+=v[l];l++;
            }
            if(sum>eat)
            {
                chance=0;
                eat=sum;
            }
    

        }
        else
        {
             while(sum<=eat and l<=r)
            {
                sum+=(v[r]);cb+=v[r--];
                // cout<<v[r]<<" ";r--;
            }
            if(sum>eat)
            {
                chance=1;
                eat=sum;
            }
            // else
            // {c--;cout<<"#"<<sum<<" "<<eat;}

        }
        // debug(eat);debug(l);debug(r);
        c++;
    }
    cout<<c<<" "<<ca<<" "<<cb<<"\n";
    
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