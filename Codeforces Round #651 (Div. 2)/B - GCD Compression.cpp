#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define eb  emplace_back
#define loop(a,n) for(ll i=0;i<n;i++)
#define debug(x)  cout<<#x<<" "<<x<<"\n";
#define mod 1e9+7
#define setbits(x)  __builtin_popcountll(x)
#define digits(a,x)  a=floor(log10(x)) + 1

bool prime(ll s);
ll power(ll x, ll y) ;


int search(ll a[],int k,ll size)
{
    
    return -1;
    
}
void solve()
{
    ll n,c=1,even=0,odd=0;
    cin>>n;
   std::vector<int> a(2*n) ;
   loop(0,2*n)
   {
       ll temp;
       cin>>temp;
       if(temp%2==0)
       {a[i]=1;
       even++;}
       else
       {a[i]=0;
       odd++;}
       
   }
   
   ll size=2*n;
   auto s=a.begin();
   while(n!=1)
   {
       n--;
       
            int ans,ans2;
                auto i=find(a.begin(),a.end(),1);
                if(i!=a.end())
                {
                    *i=2;
                    even--;
                    if(even>0)
                    {
                        auto j=find(a.begin(),a.end(),1);
                        ans2=j-s;
                        ans=i-s;
                        *j=2;
                        even--;
                    }
                    
                }
                if( even==0)
                {
                    auto c=find(a.begin(),a.end(),0);
                    if(c!=a.end())
                    {
                        *c=2;
                        odd--;
                        if(odd>0)
                        {
                            auto d=find(a.begin(),a.end(),0);
                            ans2=d-s;
                            ans=c-s;
                            *d=2;
                            odd--;
                        }
                    }
                }
              
      
                  cout<<ans+1<<" "<<ans2+1<<"\n";
       
       
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