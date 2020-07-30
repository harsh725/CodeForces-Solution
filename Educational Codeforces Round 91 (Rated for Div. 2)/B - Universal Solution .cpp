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
    string s;
    cin>>s;
    ll ans=-1;
    char ch;
    map<char,int> m;
    for(char i:s)
    {m[i]++;
        if(ans<m[i])
        {
            ch=i;
            ans=m[i];
        }
    }
    std::map<char, char> mp ;
    mp['R']='P';
    mp['P']='S';
    mp['S']='R';
    
    loop(0,s.size())
    cout<<mp[ch];
    cout<<endl;
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
