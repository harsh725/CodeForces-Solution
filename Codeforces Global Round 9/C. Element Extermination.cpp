#include<iostream>
using namespace std;
int main()
{
    long long a,t,n,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>temp;
            if(i==0)
            a=temp;
            
        }
        if(a<temp)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    
    
    return 0;
}