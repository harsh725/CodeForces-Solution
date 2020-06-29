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

bool prime(ll s);
ll power(ll x, ll y) ;

bool ispower2(ll n)
{
    
    return n && (!(n&(n-1)));
}
void solve()
{
    ll n,x,y,k,z,c1=0,c2=0,t1=0,t2=0,sum=0;
    cin>>n>>k;
    std::vector<ll> v ;
    std::vector<ll> v2 ;
    
    
    ll i=0,j=0;
    vector<ll > same;
    while(n--)
    {
        cin>>x>>y>>z;
        if(z==0 && y==0)
        continue;
        if(y&& z)
        {
            same.emplace_back(x);
            
        t1+=y;
        t2+=z;
            continue;
        }
        
            if(y==1 )
            {
                v.emplace_back(x);
            }
            if(z==1)
            v2.emplace_back(x);
        
        
        t1+=y;
        t2+=z;
    }
    if(t1<k || t2<k)
    {
        cout<<"-1\n";
        return ;
    }
    sort(same.begin(),same.end());
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
     i=0;
     j=0;
     same.emplace_back(9999999);
     v.emplace_back(INT_MAX);
     v2.emplace_back(INT_MAX);
     
    while(c1<k && c2<k)
    {
        if(same[j]<=(v[i]+v2[i]))
        {sum+=same[j++];
            k--;
            continue;
        }
        
        
        sum+=v[i];
        sum+=v2[i];
        
        i++;
        k--;
    }
    cout<<sum<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    // ll t;cin>>t;
    int t=1;
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