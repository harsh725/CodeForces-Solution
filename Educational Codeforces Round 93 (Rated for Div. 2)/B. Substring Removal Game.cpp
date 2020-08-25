#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    string s;cin>>s;
	    int count=0,ans=0;
	    std::vector<int> v;
	    for(char c:s)
	    {
	        if(c=='1')
	        count++;
	        else
	        {
	            v.emplace_back(count);
	            count=0;
	        }

	    }
	    v.emplace_back(count);
	    std::sort(v.begin(),v.end());
	    for(int i=v.size()-1;i>=0;i-=2)
	    ans+=v[i];
	    cout<<ans<<"\n";
	}
	return 0;
}
