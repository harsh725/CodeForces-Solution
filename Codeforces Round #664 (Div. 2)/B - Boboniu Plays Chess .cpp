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
    ll n,m,i,j;
    cin>>n>>m>>i>>j;
    bool board[n][m]={false};
    i--;j--;
    // ll x=1;
     while(j<m)
        {
            if(board[i][j]==false)
            {cout<<i+1<<" "<<j+1<<"\n";
                board[i][j]=true;
                
            }
            j++;
        }
        j--;
        while(j>=0)
        {
            if(board[i][j]==false)
            {cout<<i+1<<" "<<j+1<<"\n";
                board[i][j]=true;
                
            }
            j--;
            
        }
        
        ll row=i+1;
    while(1)
    {
        if(row==n)
        row=0;
        
        if(board[row][0]==true)
        break;
        loop(0,m)
        cout<<row+1<<" "<<i+1<<"\n";
        
        row++;
        if(row==n)
        row=0;
        if(board[row][0]==true)
        break;
        loop(0,m)
        cout<<row+1<<" "<<m-i<<"\n";
        row++;
    }
    
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    ll t=1;
    // cin>>t;

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