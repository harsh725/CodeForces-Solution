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

// bool prime(ll s);
ll power(ll x, ll y) ;

bool ispower2(ll n)
{
    
    return n && (!(n&(n-1)));
}
    bool prime[200002]; 

void SieveOfEratosthenes() 
{ 
    int n=200001;
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    // for (int p=2; p<=n; p++) 
    //   if (prime[p]) 
    //       cout << p << " "; 
} 
void solve()
{
    ll n;
    cin>>n;
    if(n<31)
    {
        cout<<"NO\n";return ;
    }
    
    
    if(n==36 or n==40 or n==44)
    {
        if(n==36)
        cout<<"YES\n5 6 10 15\n";
        if(n==40)
        cout<<"YES\n6 10 15 9\n";
        if(n==44)
        cout<<"YES\n6 10 15 13\n";
        return ;
    }
    cout<<"YES\n6 10 14 ";
    cout<<n-6-10-14<<"\n";
    
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    // SieveOfEratosthenes();
    ll t=1;
    cin>>t;
    
    while(t--)
    {
        solve();
    }
    
    return 0;
}



// bool prime(ll s)
// {
//     if (s <= 1)  return false;
//     if (s <= 3)  return true;
//     if (s%2 == 0 || s%3 == 0) return false;

//     for (ll i=5; i*i<=s; i=i+6)
//         if (s%i == 0 || s%(i+2) == 0)
//           return false;

//     return true;
// }

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